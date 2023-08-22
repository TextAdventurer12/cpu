#include "memory.h"

dword mem[MEM_SIZE];
dword rom[ROM_SIZE];
qword stack[STACK_SIZE];
qword *stack_ptr = stack;
dword MAR = 0x0;

dword lambda(set_MAR, MAR = address, dword address);
dword lambda(write, mem[MAR] = value, dword value);
dword lambda(read, mem[MAR], void);

qword stack_pop()
{
    qword ret = *stack_ptr;
    --stack_ptr;
    return ret;
}
qword lambda(stack_peep, *stack_ptr, void)
void stack_push(qword value)
{
    ++stack_ptr;
    *stack_ptr = value;
}