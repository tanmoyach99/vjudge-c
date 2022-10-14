#include <stdio.h>

int main()
{
    int N, K, A;

    scanf("%d%d%d", &N, &K, &A);
    int last_card = N;

    int ans = (A + K - 1) % N;

    if (ans == 0)
        last_card = N;
    else
        last_card = ans;

    printf("%d\n", last_card);
}
