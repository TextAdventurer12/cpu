#ifndef MEMORY_H
#define MEMORY_H

#include "base.h"
#include <stdlib.h>
#include <string.h>

#define MEM_SIZE   0x600000 // size in bytes
#define STACK_SIZE 0x020000 // size in qwords

#define MEM_READ(size, address) (r_mem_##size(address))

byte r_mem_byte(size_t address);
word r_mem_word(size_t address);
dword r_mem_dword(size_t address);
qword r_mem_qword(size_t address);

#define MEM_WRITE(size, value, address) (w_mem_##size(value, address))

void w_mem_byte(byte value, size_t address);
void w_mem_word(word value, size_t address);
void w_mem_dword(dword value, size_t address);
void w_mem_qword(qword value, size_t address);

qword stack_pop();
qword stack_peep();
void stack_push(qword value);
success stack_check();

#endif