#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    char grade;
    puts("Enter grade : \n");
    printf("%s", "Enter EOF character to end input : \n");

    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            a++;
            break;
        case 'B':
        case 'b':
            b++;
            break;
        case 'C':
        case 'c':
            c++;
            break;
        case 'D':
        case 'd':
            d++;
            break;
        case 'E':
        case 'e':
            e++;
            break;
        case 'F':
        case 'f':
            f++;
            break;
        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            puts("Invalid grade entered. ");
            puts("Enter new grade: \n");
            break;
        }
    }
    printf("%s", "Totals for each grade are : \n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("D = %d\n", d);
    printf("E = %d\n", e);
    printf("F = %d\n", f);
}