#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], s1[100];

    scanf("%s", &s);
    scanf("%s", &s1);

    int len = strlen(s);

    int a = s[0] - s1[0];

    for (int i = 1; i < len; i++)
    {

        int a1 = s[i] - s1[i];

        if (a1 != a)
        {
            printf("No\n");
            return 0;
        }
    };

    printf("Yes\n");
    return 0;
}