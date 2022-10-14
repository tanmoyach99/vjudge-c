#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, x, k = 0;
    char ar[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        k = 0;
        scanf("%d", &x);
        scanf("%s", &ar);
        if (strlen(ar) < 11)
            printf("NO\n");
        else
        {
            for (int i = 0; i < strlen(ar) - 10; i++)
            {
                if (ar[i] == '8')
                    k++;
            }
            if (k == 0)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}