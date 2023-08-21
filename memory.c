#include "memory.h"

byte mem[MEM_SIZE];
byte rom[ROM_SIZE];
qword stack[STACK_SIZE];
qword *stack_ptr = stack;

byte lambda(r_mem_byte, mem[address], size_t address);
word lambda(r_mem_word, *((word*)(mem+address)), size_t address);
dword lambda(r_mem_dword, *((dword*)(mem+address)), size_t address)
qword lambda(r_mem_qword, *((qword*)(mem+address)), size_t address)

void w_mem_byte(byte value, size_t address)
{
    mem[address] = value;
}
void w_mem_word(word value, size_t address)
{
    *((word*)(mem+address)) = value;
}
void w_mem_dword(dword value, size_t address)
{
    *((dword*)(mem+address)) = value;
}
void w_mem_qword(qword value, size_t address)
{
    *((qword*)(mem+address)) = value;
}

qword stack_pop()
{
    qword ret = *stack_ptr;
    --stack_ptr;
    return ret;
}
qword lambda(stack_peep, *stack_ptr)
void stack_push(qword value)
{
    ++stack_ptr;
    *stack_ptr = value;
}
success lambda(stack_check, stack_ptr < stack + STACK_SIZE && stack_ptr > stack)