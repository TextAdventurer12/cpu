#include <stdio.h>
#include <stdlib.h>
#include "base.h"
#include "memory.h"
#include "program.h"

int lambda(valid_sizes, (sizeof(byte) == 1) && (sizeof(word) == 2) && (sizeof(dword) == 4) && (sizeof(qword) == 8))

int main(int argc, char **argv)
{
    if (!valid_sizes())
    {
        printf("Type size error\n");
        return 1;
    }
    if (argc != 2)
        return 1;
    FILE *ROM = fopen(argv[1], "r");
    copy_ROM(ROM);
    dword ip = 0x0;
    for (ip = 0x0; *(byte *)&fetch(ip) != 0x0; ip++)
}