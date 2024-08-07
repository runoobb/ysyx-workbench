#include <proc.h>
#include <elf.h>
#include <klib.h>
#include <stdio.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {

  Elf_Ehdr *ehdr;
  ehdr = (Elf_Ehdr *)malloc(sizeof(Elf_Ehdr));

  ramdisk_read(ehdr, 0, sizeof(Elf_Ehdr));

  // check magic number of elf file
  char riscv32_magic_num[] = {0x7f, 0x45, 0x4c, 0x46, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  assert(strcmp((char *)(ehdr -> e_ident), riscv32_magic_num) == 0);

  uint32_t entry = ehdr -> e_entry;
  uint32_t ph_offset = ehdr -> e_phoff;
  uint32_t ph_num = ehdr -> e_phnum;

  // printf("%d\n", entry);
  // printf("%d\n", ph_offset);
  // printf("%d\n", ph_num);

  Elf_Phdr phdr;
  uint32_t offset;
  uint32_t file_size;
  uint32_t p_vaddr;
  uint32_t mem_size;

  for (int i = 0; i < ph_num; ++i)
  {
    ramdisk_read(&phdr, ph_offset + i * sizeof(phdr), sizeof(phdr));
    if (phdr.p_type != PT_LOAD)
      continue;
    offset = phdr.p_offset;
    file_size = phdr.p_filesz;
    p_vaddr = phdr.p_vaddr;
    mem_size = phdr.p_memsz;
    ramdisk_read((void *) p_vaddr, offset, file_size);
    memset((void *) p_vaddr + file_size, 0, mem_size - file_size);
  }
  free(ehdr);
  return entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %x", entry);
  ((void(*)())entry) ();
}

