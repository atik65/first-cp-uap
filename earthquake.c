// code by atik

#include <stdio.h>
#include <math.h>

int main()
{

    int num1, num2, difference, base;
    double result;
    base = 32;

    // input
    scanf("%d %d", &num1, &num2);

    if (num2 == num1)
    {
        printf("1");
    }
    else
    {
        difference = num1 - num2;
        result = pow(base, difference);

        printf("%1.0f\n", result);
    }

    return 0;
}