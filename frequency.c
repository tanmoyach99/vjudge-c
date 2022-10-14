#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char arr[1000];

    scanf("%s", arr);
    int counter[1000] = {0};

    for (int i = 0; i < strlen(arr); i++)
    {

        if (arr[i] >= '0' && arr[i] <= '9')
        {
            int val = arr[i];
            counter[val - '0']++;
        }
    }
    for (int = 0; i < 10; i++)
    {
        printf("%d ", counter[i]);
    }

    return 0;
}