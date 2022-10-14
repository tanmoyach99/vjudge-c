#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];

    scanf("%s", &a);

    // strcpy(b, a);

    // strrev(b);

    for (int i = 0, j = strlen(a) - 1; i < strlen(a), i <= j; i++, j--)
    {

        printf("%d%d\n", i, j);
        if (a[i] != a[j])
        {
            // printf("%c%c\n", a[i], a[j]);
            printf("no\n");
            return 0;
        }
    }

    printf("Yes\n");
}