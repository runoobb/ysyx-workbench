#include "include/include.h"
#include <string.h>

extern uint8_t* inst_mem;
extern uint8_t* data_mem;

void npc_init(int argc, char** argv, uint8_t* inst_mem, uint8_t* data_mem){
    char *data_file_path = "/home/ykwang/Templates/ysyx-workbench/npc/vsrc/data_mem.txt";
    char *inst_file_path = "/home/ykwang/Templates/ysyx-workbench/npc/vsrc/machinecode.txt";

    FILE *fp = fopen(data_file_path, "rb");
    if(fp == NULL){
        printf("Can not open '%s'\n", data_file_path);
        assert(0); 
  }

    char data_buf [3] = {};
    int data_count = 0;
    while(fscanf(fp, "%2s", data_buf) != EOF & data_count < DATA_MEMORY_SIZE){
        assert(data_count < DATA_MEMORY_SIZE);
        data_mem[data_count++] = (uint8_t)strtol(data_buf, NULL, 16);
    }

    fp = fopen(inst_file_path, "rb");
    if(fp == NULL){
        printf("Can not open '%s'\n", inst_file_path);
        assert(0); 
    }

    char inst_buf [9] = {};
    char hex_byte [3] = {};
    int inst_count = 0;
    while(fscanf(fp, "%8s", inst_buf) != EOF){
        for(int i = 0; i < 4; i++){
            strncpy(hex_byte, &inst_buf[2*i], 2);
            inst_mem[inst_count++] = (uint8_t)strtol(hex_byte, NULL, 16);
        }
        assert(inst_count < INST_MEMORY_SIZE);
    }
    
    fclose(fp);

    printf("inst: %x, %x, %x, %x\n", inst_mem[0], inst_mem[1], inst_mem[2], inst_mem[3]);
    printf("data: %x, %x, %x, %x\n", data_mem[0], data_mem[1], data_mem[2], data_mem[3]);
}