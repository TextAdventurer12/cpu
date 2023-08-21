#ifndef ALU_H
#define ALU_H

qword read_accumulator();
qword read_flags();
void handle_instruction(qword instruction, qword operand);

#endif