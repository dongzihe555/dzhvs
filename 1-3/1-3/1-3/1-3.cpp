#include <stdio.h>
int main()
{
    char str[20];
    char sty[20];
    int a, b, n;
    scanf_s("%s %d %d %d", str, 20, &a, &b, &n);
    int c, g, z, x = 0, s = 0, l, nn = 0;
    while (nn <= n)
    {
        scanf_s("%s %d %d", sty, 20, &c, &g);
        if (a == c)
        {
            nn = nn + g;
            if (nn > n)
            {
                break;
            }
            else
            {
                z = g * b;
                do
                {
                    scanf_s("%d", &x);
                    s = s + x;
                } while (s < z);
                l = s - z;
                printf("%d", l);
                nn = nn + g;
                c = g = z = s = l = x = 0;
            }
        }
        else
        {
            printf("Í¨µÀ´íÎó");
        }
    }
    printf("È±»õ");
    return 0;
}
