#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int sum = 0;
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    };
    printf("%d\n", sum);

    return 0;
}