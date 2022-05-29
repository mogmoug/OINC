#ifndef _OINC_H
#define _OINC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
enum{
    NOP = 0,
    ADD,
    JMI,
};
enum{
    N,
    Z,
    P
};
typedef struct M_instru
{
    uint8_t op;
    uint8_t a;
    uint8_t b;
} M_instru;
typedef struct M_control
{
    uint64_t PC;
    uint8_t cont;
    uint8_t reg[16];
    uint8_t mem[1024*512];
} M_control;
M_control init();
int boot(M_control);
int exec_instruction(M_instru);

#endif
