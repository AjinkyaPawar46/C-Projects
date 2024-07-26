#include <stdio.h>

int main(void)
{
    printf("%7s%10s%8s%12s\n", "Decimal", "Binary", "Octal", "Hexadecimal");
    for (unsigned int i = 1; i <= 256; i++)
    {
        printf("%7u", i);
        int a = i, j = 1;
        int bin = 0;
        while (a > 0)
        {
            bin = bin + (a % 2) * j;
            j = j * 10;
            a /= 2;
        }
        printf("%10u", bin);
        printf("%8o", i);
        printf("%12X", i);

        puts("");
    }
}