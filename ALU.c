#include "ALU.h"

qword acc;
qword flags;

qword lambda(read_accumulator, acc);
qword lambda(read_flags, flags);

void handle_instruction(qword instruction, qword operand)
{
    switch (instruction)
    {
        case 0x0:
            acc = operand;
        break;
        case 0x1:
            acc += operand;
        break;
        case 0x2:
            acc -= operand;
        break;
        case 0x3:
            acc *= operand;
        break;
        case 0x4:
            acc /= operand;
        break;
        case 0x5:
            acc = acc || operand;
        break;
        case 0x6:
            acc = acc && operand;
        break;
        case 0x7:
            acc = acc ^^ operand;
        break;
        case 0x8:
            acc = !operand;
        break;
        case 0x9:
            acc = acc << operand;
        break;
        case 0xA:
            acc = acc >> operand;
        break;
        case 0xB:
            
    }
}