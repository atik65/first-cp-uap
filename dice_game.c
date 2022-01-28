#include <stdio.h>

int main()
{
    int side1, side2, side3, side4, side5, side6;
    scanf("%d %d %d", &side1, &side2, &side3);
    side4 = 7 - side1;
    side5 = 7 - side2;
    side6 = 7 - side3;
    printf("%d", side4 + side5 + side6);
    return 0;
}