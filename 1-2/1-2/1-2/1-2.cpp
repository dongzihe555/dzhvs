#include <stdio.h>
int main()
{
    int z, x = 0, s = 0, l;
    scanf_s("%d", &z);
    do
    {
        scanf_s("%d", &x);
        s = s + x;
    } while (s < z);
    l = s - z;
    printf("%d", l);
    return 0;
}
