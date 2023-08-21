#ifndef PROGRAM_H
#define PROGRAM_H

#define ROM_SIZE   0x100000 // size in bytes

#include "base.h"
#include <stdio.h>

success copy_ROM(FILE *ROM);
byte fetch(size_t address);

#endif