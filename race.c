#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);
    int T = 0, A = 0;
    for (int i = 0; i < x; i++)
    {
        if (i % (a + c) < a)
        {
            T += b;
        }
        if (i % (d + f) < d)
        {
            A += e;
        }
    }

    if (T > A)
        printf("Takahashi\n");
    else if (A > T)
        printf("Aoki\n");
    else if (T == A)
        printf("Draw\n");

    return 0;
}