#include <stdio.h>
#include <stdlib.h>
#include "base.h"
#include "memory.h"

int lambda(valid_sizes, (sizeof(byte) == 1) && (sizeof(word) == 2) && (sizeof(dword) == 4) && (sizeof(qword) == 8))

int main(int argc, char **argv)
{
    if (!valid_sizes())
    {
        printf("Type size error\n");
        return 1;
    }
    for (word i = 0x0; i < 0x100; i++)
        stack_push(i);
    for (word i = 0x0; i < 0x100; i++)
        printf("%ld, ", stack_pop());
    printf("\n");
}