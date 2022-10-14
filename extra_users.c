#include <stdio.h>

int main()
{

    int A, B;

    scanf("%d %d", &A, &B);

    int users = 2 * A + 100 - B;

    printf("%d\n", users);

    return 0;
}