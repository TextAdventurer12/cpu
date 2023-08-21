#ifndef BASE_H
#define BASE_H

typedef char *string;
typedef unsigned char byte;
typedef unsigned int dword;
typedef unsigned short word;
typedef unsigned long int qword;
typedef int success;

#define lambda(name, func, ...) name(__VA_ARGS__) { return func; }

#endif