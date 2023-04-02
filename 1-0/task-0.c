#include <stdio.h>

/** This is a program that prints all possible combinations of single-digit numbers,
*Separated by ,, followed by a space, and in ascending order.
*THe code uses the int type, and the putchar function  four times.
*/

int main(void) {
    int i = 48;
    for (i = 48; i <= 57; i++) {
        putchar(i);
        if (i != 57) {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}


