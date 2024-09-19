#include <stdio.h>
int main()
{
    char str[20];
    int a, b, n, x = 1;
    scanf_s("%s %d %d %d", str, 20, &a, &b, &n);
    printf("%d: ", a);
    for (x = 1; x <= n; x++)
    {
        printf("%s", str);
    }
    printf(" %d", b);
    return 0;
}
