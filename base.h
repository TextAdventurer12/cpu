#ifndef BASE_H
#define BASE_H

typedef char *string;
typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned int dword;
typedef unsigned long int qword;

#define lambda(name, func, ...) name(__VA_ARGS__) { return func; }

#define whereami printf("%s, %d\n", __FILE__, __LINE__)

typedef struct CPU
{
    dword MEM_SIZE;
    dword STACK_SIZE;
    dword *mem;
    dword *stk;
} CPU;

#endif