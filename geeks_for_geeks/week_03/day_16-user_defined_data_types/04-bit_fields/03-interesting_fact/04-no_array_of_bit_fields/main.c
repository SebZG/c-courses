// 4. Array of bit fields is not allowed.
// Example: The below C program defines an array of bit fields and fails in the compilation.

// C Program to illustrate that we cannot have array bit
// field members
#include <stdio.h>

// structure with array bit field
struct test {
    unsigned int x[10] : 5;
};

int main() {}

// prog.c:3:1: error: bit-field 'x' has invalid type
//  unsigned int x[10]: 5;
//  ^
