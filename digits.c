#include <stdio.h>
int main()
{
    int abc;
    scanf("%d", &abc);
    int sum = 0;
    int c = abc % 10;
    int b = (abc / 10) % 10;
    int a = abc / 100;
    sum = (a * 100 + b * 10 + c) + (b * 100 + c * 10 + a) + (c * 100 + a * 10 + b);

    printf("%d\n", sum);
}