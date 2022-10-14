#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (i == 0)
        {
            if (str[0] >= 'a' && str[0] <= 'z')
            {
                str[0] = str[0] - 'a' + 'A';
                printf("%c", str[0]);
            }
            else
                printf("%c", str[0]);
        }
        else if (i > 0)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {

                str[i] = str[i] - 'A' + 'a';
                printf("%c", str[i]);
            }
            else
                printf("%c", str[i]);
        }
    }

    return 0;
}
