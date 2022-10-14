#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int n;

    scanf("%d", &n);
    int last_digit = n % 10;
    int second_last_digit = (n / 10) % 10;
    int middle_digit = (n / 100) % 10;
    int second_digit = (n / 1000) % 10;
    int first_digit = (n / 10000) % 10;

    int result = first_digit + second_digit + middle_digit + second_last_digit + last_digit;

    printf("%d", result);

    return 0;
}