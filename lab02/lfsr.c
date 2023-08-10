#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    unsigned x = 0;
    x ^= ((*reg)&1);
    x ^= (((*reg)>>2)&1);
    x ^= (((*reg)>>3)&1);
    x ^= (((*reg)>>5)&1);
    return x;

    (*reg) >>= 1;
    // set_bit(*reg,15,MSB);
    (*reg) |= (x << 15);
}

