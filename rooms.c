#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int free_room = 0;
    for (int i = 0; i < n; i++)
    {
        int p, q;
        scanf("%d%d", &p, &q);
        if (q - p >= 2)
        {

            free_room++;
        }
    }
    printf("%d", free_room);
}