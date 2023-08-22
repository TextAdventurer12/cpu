#ifndef MEMORY_H
#define MEMORY_H

#include "base.h"
#include <stdlib.h>
#include <string.h>

#define MEM_SIZE   0x1000000 // size in bytes
#define STACK_SIZE 0x020000 // size in qwords

dword set_MAR(dword);
dword write(dword);
dword read(void);


dword stack_pop(void);
dword stack_peep(void);
void stack_push(dword value);

#endif