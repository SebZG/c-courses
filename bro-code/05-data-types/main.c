#include <stdbool.h>
#include <stdio.h>

int main()
{
    // 1 bit = a single binary digit (0 or 1)
    // 1 byte = a group of 8 bits that represent a single unit of data - max value = 255

    // Bit 0: 2^0 = 1 (LSB) // (zero index)
    // Bit 1: 2^1 = 2
    // Bit 2: 2^2 = 4
    // Bit 3: 2^3 = 8
    // Bit 4: 2^4 = 16
    // Bit 5: 2^5 = 32
    // Bit 6: 2^6 = 64
    // Bit 7: 2^7 = 128 (MSB)

    // Adding up all these values, we get:
    // 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 = 255
    // 2^8 = 256 (combinations) - 256 combinations, so 0 to 255 values are possible

    char a = 'C';      // single character - %c
    char b[] = "Bro";  // array of characters - %s

    float c = 3.14;   // 4 bytes (32 bits of precision) 6-7 digits - %f
    double d = 3.14;  // 8 bytes (64 bits of precision) 15-16 digits - %lf

    bool e = true;  // 1 byte (true or false) - %d

    char f = 100;           // 1 byte (-128 to +127) - %d or %c
    unsigned char g = 255;  // 1 byte (0 to +255) - %d or %c

    short int h = 32767;           // 2 bytes (-32,768 to +32,767) - %d
    unsigned short int i = 65535;  // 2 bytes (0 to +65,535) - %d

    long int j = 2147483647;      // 4 bytes (-2,147,483,648 to +2,147,483,647) - %d
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) - %u

    long long int l = 9223372036854775807;            // 8 bytes (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807) - %lld
    unsigned long long int m = 18446744073709551615;  // 8 bytes (0 to +18,446,744,073,709,551,615) - %llu

    // printf("%c\n", a);   // char
    // printf("%s\n", b);   // character array
    // printf("%0.15f\n", c);   // float
    // printf("%0.15lf\n", d);  // double
    // printf("%d\n", e);   // bool
    // printf("%d\n", f);   // char as a numeric value
    // printf("%d\n", g);   // unsigned char as a numeric value
    // printf("%d\n", h);   // short
    // printf("%d\n", i);   // unsigned short
    // printf("%d\n", j);   // int
    // printf("%u\n", k);   // unsigned int
    // printf("%lld\n", l)  // long long int
    // printf("%llu\n", m); // unsigned long long int

    return 0;
}