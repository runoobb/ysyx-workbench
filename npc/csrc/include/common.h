#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <cinttypes>

#include <macro.h>

#ifdef CONFIG_TARGET_AM
#include <klib.h>
#else
#include <assert.h>
#include <stdlib.h>
#endif

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)

typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

#include <debug.h>

// TODO: manage macro define in simulation
#define CONFIG_AUDIO_CTL_MMIO 0xa0000200
#define CONFIG_DIFFTEST_REF_NAME "none"
#define CONFIG_ENGINE "interpreter"
#define CONFIG_WATCHPOINT 1
#define CONFIG_VGA_SIZE_400x300 1
#define CONFIG_VGA_SHOW_SCREEN 1
#define CONFIG_PC_RESET_OFFSET 0x0
#define CONFIG_RTC_MMIO 0xa0000048
#define CONFIG_TARGET_NATIVE_ELF 1
#define CONFIG_HAS_AUDIO 1
#define CONFIG_MSIZE 0x8000000
#define CONFIG_CC_O2 1
// #define CONFIG_DEVICE 1 (npc is not supporting device right now)
#define CONFIG_HAS_KEYBOARD 1
#define CONFIG_MODE_SYSTEM 1
#define CONFIG_MEM_RANDOM 1
#define CONFIG_ITRACE 1
#define CONFIG_HAS_SERIAL 1
#define CONFIG_ISA_riscv 1
#define CONFIG_HAS_DISK 1
#define CONFIG_TRACE_END 10000
#define CONFIG_FB_ADDR 0xa1000000
#define CONFIG_CC_ASAN 1
#define CONFIG_HAS_VGA 1
#define CONFIG_HAS_TIMER 1
#define CONFIG_DISK_CTL_MMIO 0xa0000300
#define CONFIG_MBASE 0x80000000
#define CONFIG_TIMER_GETTIMEOFDAY 1
#define CONFIG_ENGINE_INTERPRETER 1
#define CONFIG_CC_OPT "-O2"
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_RT_CHECK 1
#define CONFIG_I8042_DATA_MMIO 0xa0000060
#define CONFIG_ITRACE 1
#define CONFIG_SB_SIZE 0x10000
#define CONFIG_CC "gcc"
#define CONFIG_DIFFTEST_REF_PATH "none"
#define CONFIG_CC_DEBUG 1
#define CONFIG_TRACE_START 0
#define CONFIG_DISK_IMG_PATH ""
#define CONFIG_CC_GCC 1
#define CONFIG_SB_ADDR 0xa1200000
#define CONFIG_TRACE 1
#define CONFIG_ISA "riscv32"
#define CONFIG_VGA_CTL_MMIO 0xa0000100
#define CONFIG_PMEM_GARRAY 1


#endif
