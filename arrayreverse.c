#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;

    int arr[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)

    {

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)

    {

        int temp;

        temp = arr[i];

        arr[i] = arr[n - 1 - i];

        arr[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++)

    {

        printf("%d ", arr[i]);
    }

    return 0;
}