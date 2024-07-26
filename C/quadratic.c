#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, r1, r2, s, d;
    printf("Enter the coefficients of the equation(a,b,c) \n");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c; // This calculates the discriminant
    if (d >= 0)
    {
        s = sqrt(d);
        // The next 2 statements uses the quadratic equation formula
        r1 = (-b + s) / (2 * a);
        r2 = (-b - s) / (2 * a);

        if (r1 == r2)
            printf("The only root of the equation is %.2f", r1);
        else
            printf("Roots of the equation are: %.2f and %.2f", r1, r2);
    }
    else
        printf("This equation has imaginary roots");
    return 0;
}