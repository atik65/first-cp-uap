#include <stdio.h>

int main()
{

    int item1, item2;
    scanf("%d %d", &item1, &item2);
    if (0 < item1 && item2 == 0)
    {
        printf("Gold\n");
    }

    if (item1 == 0 && 0 < item2)
    {
        printf("Silver\n");
    }

    if (0 < item1 && 0 < item2)
    {
        printf("Alloy\n");
    }
    return 0;
}