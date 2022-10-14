#include <stdio.h>

int main()
{
    int S, T, X;

    scanf("%d%d%d", &S, &T, &X);
    if (S < T)
    {
        if (S <= X && X < T)
            printf("Yes\n");
        else
            printf("No\n");
    }
    else
    {
        if (X < T || S <= X)
            printf("Yes\n");
        else
            printf("No\n");
    }
}