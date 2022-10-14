#include <stdio.h>

int main()
{
    char n[] = "heidi";
    char str[1001];
    scanf("%s", &str);
    int count = 0, k = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (s[i] == n[k])
        {
            count++;
            k++;
        }
    }
    if (count == 5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
