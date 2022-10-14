#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];

    scanf("%s", &a);

    int counter[26] = {0};

    // strcpy(b, a);

    // strrev(b);

    for (int i = 0; i < strlen(a); i++)
    {

        char value = a[i];
        counter[value - 'a'] = 1;
        // if (a[i] != a[j])
        // {
        //     // printf("%c%c\n", a[i], a[j]);
        //     printf("no\n");
        //     return 0;
        // }
    }
    for (char value = 'a'; value <= 'z'; value++)
    {
        if (counter[value - 'a'] == 0)
        {
            printf("no\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}