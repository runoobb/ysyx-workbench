#include "include/include.h"
#include <string.h>
#include <getopt.h>
#include <common.h>
#include <memory/paddr.h>
#include <memory/vaddr.h>
#include <memory/host.h>


char* img_file = NULL;
char* log_file = NULL;
static char *diff_so_file = NULL;

static int parse_args(int argc, char *argv[]);
static long load_img(char *img_file);

void npc_init(int argc, char** argv){
//     char *data_file_path = "/home/ykwang/Templates/ysyx-workbench/npc/vsrc/data_mem.txt";
//     char *inst_file_path = "/home/ykwang/Templates/ysyx-workbench/npc/vsrc/machinecode.txt";

//     FILE *fp = fopen(data_file_path, "rb");
//     if(fp == NULL){
//         printf("Can not open '%s'\n", data_file_path);
//         assert(0); 
//   }

//     char data_buf [3] = {};
//     int data_count = 0;
//     while(fscanf(fp, "%2s", data_buf) != EOF & data_count < DATA_MEMORY_SIZE){
//         assert(data_count < DATA_MEMORY_SIZE);
//         data_mem[data_count++] = (uint8_t)strtol(data_buf, NULL, 16);
//     }

//     fp = fopen(inst_file_path, "rb");
//     if(fp == NULL){
//         printf("Can not open '%s'\n", inst_file_path);
//         assert(0); 
//     }

//     char inst_buf [9] = {};
//     char hex_byte [3] = {};
//     int inst_count = 0;
//     while(fscanf(fp, "%8s", inst_buf) != EOF){
//         for(int i = 0; i < 4; i++){
//             strncpy(hex_byte, &inst_buf[2*i], 2);
//             inst_mem[inst_count++] = (uint8_t)strtol(hex_byte, NULL, 16);
//         }
//         assert(inst_count < INST_MEMORY_SIZE);
//     }
    
//     fclose(fp);

//     printf("inst: %x, %x, %x, %x\n", inst_mem[0], inst_mem[1], inst_mem[2], inst_mem[3]);
//     printf("data: %x, %x, %x, %x\n", data_mem[0], data_mem[1], data_mem[2], data_mem[3]);
  parse_args(argc, argv);
  long img_size = load_img(img_file);
}

static long load_img(char* img_file) {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

//   Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    // {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    // {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
    //   case 'b': sdb_set_batch_mode(); break;
      // case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        // printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        // printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}