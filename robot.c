#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%s", &str);
    int flag = 1;
    for (int i = 1; i <= strlen(str); i++)
    {
        if (str[i] == str[i - 1])
        {
            flag++;
            if (flag == 7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
            flag = 1;
    }
    printf("NO\n");

    return 0;
}
