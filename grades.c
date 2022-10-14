#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int needed_number = 0;
    if (x >= 0 && x < 40)
    {
        needed_number = 40 - x;
        printf("%d\n", needed_number);
    }
    else if (x >= 40 && x < 70)
    {
        needed_number = 70 - x;
        printf("%d\n", needed_number);
    }
    else if (x >= 0 && x < 90)
    {
        needed_number = 90 - x;
        printf("%d\n", needed_number);
    }
    else if (x >= 90)
    {
        printf("expert\n");
    }

    return 0;
}