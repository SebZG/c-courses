// Calculating the size of each structure by directly adding
// the size of all the members, we get:

// Size of Structure A = Size of (char + short int) = 1 + 2 = 3.
// Size of Structure B = Size of (short int + char + int) = 2 + 1 + 4 = 7.
// Size of Structure C = Size of (char + double + int) = 1 + 8 + 4 = 13.
// Size of Structure A = Size of (double + int + char) = 8 + 4 + 1= 13.

// Output
// sizeof(structa_t) = 4
// sizeof(structb_t) = 8
// sizeof(structc_t) = 24
// sizeof(structd_t) = 16

// C Program to demonstrate the structure padding property
#include <stdio.h>

// Alignment requirements
// (typical 32 bit machine)

// char         1 byte
// short int    2 bytes
// int          4 bytes
// double       8 bytes

// structure A
typedef struct structa_tag
{
    char c;      // 1 byte
    short int s; // 2 bytes - alignment
} structa_t;
// sizeof(char) + 1 (padding) + sizeof(short), 1 + 1 + 2 = 4 bytes.

// structure B
typedef struct structb_tag
{
    short int s; // 2 bytes
    char c;      // 1 byte
    int i;       // 4 bytes - alignment
} structb_t;
// the structb_t requires , 2 + 1 + 1 (padding) + 4 = 8 bytes.

// structure C
typedef struct structc_tag
{
    char c;   // 1 byte
    double d; // 8 bytes - alignment
    int s;    // 4 bytes
} structc_t;
// structc_t needs sizeof(char) + 7-byte padding + sizeof(double) +
// sizeof(int) = 1 + 7 (padding) + 8 + 4 = 20 bytes.
// However, the sizeof(struct_t) is 24 bytes.

// structure D
typedef struct structd_tag
{
    double d; // 8 bytes - alignment
    int s;    // 4 bytes
    char c;   // 1 byte
} structd_t;
// sizeof(double) + sizeof(int) + sizeof(char) + padding(3) = 8 + 4 + 1 + 3 = 16 bytes

int main()
{
    printf("sizeof(structa_t) = %lu\n", sizeof(structa_t));
    printf("sizeof(structb_t) = %lu\n", sizeof(structb_t));
    printf("sizeof(structc_t) = %lu\n", sizeof(structc_t));
    printf("sizeof(structd_t) = %lu\n", sizeof(structd_t));

    return 0;
}
