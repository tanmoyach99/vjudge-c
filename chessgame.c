#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 0;
    int d = 0;
    for (int i = 0; i <= n; i++)
    {
        char s;
        scanf("%c", &s);
        if (s == 'A')
        {
            a++;
            // printf("A--->%d\n", a);
        }
        else if (s == 'D')
        {
            d++;
            // printf("D--->%d\n", d);
        }
    }
    if (a > d)
        printf("Anton\n");
    else if (d > a)
        printf("Danik\n");
    else if (a == d)
        printf("Friendship");
}