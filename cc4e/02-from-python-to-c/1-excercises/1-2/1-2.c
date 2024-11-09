/*
Exercise 1-2.

Experiment to find out what happens when printf's argument string contains \x,
where x is some character not listed above.
 */

/* formula for Fahrenheit to Celsius
    C=(5/9)(F-32)

    Fahrenheit	Celsius
    0	        -17.8
    20	        -6.7
    40	        4.4
    60	        15.6
    260	        126.7
    280	        137.8
    300	        148.9
 */

/*
On the PDP-11, for instance, an int is a 16-bit signed number,
that is, one which lies between -32768 and +32767.
A float number is a 32-bit quantity, which amounts to about
seven significant digits, with magnitude between about 10-38 and 10+38.
Chapter 2 lists sizes for other machines.

The C language int type was 16 bits in the older
but more generally available computers like the PDP/11.
In particular the 1978 version of C did not require that
computers support 32 bit integers. But 32,768 is a pretty small number.
The size of an integer affected the maximum size of arrays and strings.
A lot of early C programs used the long type to get at least a 32-bit integer
capable of representing numbers up to about two billion.
In modern computers and databases we tend to choose between 32 bit and 64 bit integers.


Type	Description
char	character - a single byte
short	short integer
long	long integer
double	double-precision floating point

The sizes of these objects are also machine-dependent; details are in Chapter 2.
There are also arrays, structures and unions of these basic types, pointers to them,
and functions that return them, all of which we will meet in due course.

in C, as in many other languages, integer division truncates, so any fractional part is discarded.
Thus 5/9 is zero and of course so would be all the temperatures.
A decimal point in a constant indicates that it is floating point,
so 5.0/9.0 is 0.555..., which is what we want.

The conversion specification %4.0f says that a floating point number is to be printed in a
space at least four characters wide, with no digits after the decimal point.
%6.1f describes another number to occupy at least six spaces, with 1 digit after the decimal point,
analogous to the F6.1 of Fortran or the F(6,1) of PL/I.
Parts of a specification may be omitted: %6f says that the number is to be at least six characters wide;
%.2f requests two places after the decimal point, but the width is not constrained;
and %f merely says to print the number as floating point.
printf also recognizes:
%d for decimal integer,
%o for octal,
%x for hexadecimal,
%c for character,
%s for character string, and
%% for % itself.
 */

#include <stdio.h>

int main()
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    fahr = lower;

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}