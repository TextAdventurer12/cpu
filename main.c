#include <stdio.h>
#include <stdlib.h>
#include "base.h"
#include "memory.h"
#include "program.h"

int setup_CPU(CPU *cpu)
{
    cpu->mem = malloc(cpu->MEM_SIZE);
    cpu->stk = malloc(cpu->STACK_SIZE);
    cpu->pgm = malloc(cpu->ROM_SIZE);
    if (!cpu->mem || !cpu->stk || !cpu->pgm)
        return 1;
    return 0;
}

int lambda(valid_sizes, (sizeof(byte) == 1) && (sizeof(word) == 2) && (sizeof(dword) == 4) && (sizeof(qword) == 8))

int main(int argc, char **argv)
{
    whereami;
    CPU cpu = 
    {
        0x1000,
        0x100,
        0x100,
        NULL,
        NULL,
        NULL
    };
    if (!valid_sizes())
    {
        printf("Type size error\n");
        return 1;
    }
    if (argc != 2)
        return 1;
    FILE *ROM = fopen(argv[1], "r");
    load_ROM(ROM);
    dword ip = 0x0;
    dword ir = 0x1;
    for (ip = 0x0; ir != 0x0; ip++)
    {
        ir = fetch(ip);
    }
}