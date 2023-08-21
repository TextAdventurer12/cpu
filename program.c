#include "program.h"

byte program[ROM_SIZE];
size_t instruction_pointer;

success copy_ROM(FILE *ROM)
{
    char buf = 0;
    for (size_t i = 0; (buf = fgetc(ROM)) != EOF; i++)
        program[i] = buf;
    return 0;
}

byte lambda(fetch, program[address], size_t address);