#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
    // 不成熟的想法
    // if(x & 1<<n){
    //     return 1;
    // }else{
    //     return 0;
    // }
    // return -1;
    return 1 & (x>>n);
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
    //
    // if(get_bit(*x,n) == 0){
    //     if(v == 0) return;
    //     else x = (x | (unsigned)(1 << n));
    // }
    // if(get_bit(*x,n) == 1){
    //     if(v == 0) x = (x ^ (unsigned)(1 << n));
    //     else return;
    // }
    unsigned mask = ~(1<<n);
    (*x) = ((*x) & mask)|(v << n);
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE
    // 
    // if(get_bit(*x,n) == 0){
    //     set_bit(x,n,1);
    // }else{
    //     set_bit(x,n,0);
    // }
    (*x)^=(1<<n);
}

