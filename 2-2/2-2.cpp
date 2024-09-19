#include <stdio.h>
int main()
{
    char str[6] = { '0','0','0','0','0','\0' };
    char mm[4] = { 'E','N','D','\0' };
    char nn[5] = { 'B','A','C','K','\0' };
    char sty[6];
    char ch[6] = "ABCDE";
    int xl[5][5] = { {0,0,0,0,0},{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, };
    int bl[5] = { 0,0,0,0,0 };
    int x = 0, a, b, n, aa, g;
    int c, z = 0, s = 0, l, xx;
    int d;
    printf("输入货物：");
    scanf_s("%s", str, 6);

    while (str[0] != mm[0] || str[1] != mm[1] || str[2] != mm[2])
    {
        if (str[0] != nn[0] || str[1] != nn[1] || str[2] != nn[2] || str[3] != nn[3])
        {
            if (str[0] == ch[0]) { x = 1; }
            else if (str[0] == ch[1]) { x = 2; }
            else if (str[0] == ch[2]) { x = 3; }
            else if (str[0] == ch[3]) { x = 4; }
            else if (str[0] == ch[4]) { x = 5; }
            scanf_s("%d %d %d", &a, &b, &n);
            xl[x][a] = xl[x][a] + n;
            bl[x] = b;
        }
        else
        {
            xl[x][a] = xl[x][a] - n;
            printf("已退回");
        }
        printf("输入货物：");
        scanf_s("%s", str, 6);
    }

    printf("输入购买：");
    scanf_s("%s %d %d", sty, 6, &aa, &g);
    if (sty[0] == ch[0]) { c = 1; }
    else if (sty[0] == ch[1]) { c = 2; }
    else if (sty[0] == ch[2]) { c = 3; }
    else if (sty[0] == ch[3]) { c = 4; }
    else if (sty[0] == ch[4]) { c = 5; }
    xl[c][aa] = xl[c][aa] - g;
    d = g * bl[c];
    z = z + d;
    printf("输入购买：");
    scanf_s("%s", sty, 6);
    while (sty[0] != mm[0] || sty[1] != mm[1] || sty[2] != mm[2])
    {
        if (sty[0] != nn[0] || sty[1] != nn[1] || sty[2] != nn[2] || sty[3] != nn[3])
        {
            c = aa = g = d = 0;
            if (sty[0] == ch[0]) { c = 1; }
            else if (sty[0] == ch[1]) { c = 2; }
            else if (sty[0] == ch[2]) { c = 3; }
            else if (sty[0] == ch[3]) { c = 4; }
            else if (sty[0] == ch[4]) { c = 5; }
            scanf_s("%d %d", &aa, &g);
            xl[c][aa] = xl[c][aa] - g;
            d = g * bl[c];
            z = z + d;
        }
        else
        {
            xl[c][aa] = xl[c][aa] + g;
            z = z - d;
            printf("已退回");
            c = aa = g = d = 0;
        }
        printf("输入购买：");
        scanf_s("%s", sty, 6);
    }
    int i = 1, j = 1, k = 0;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (xl[i][j] < 0)
            {
                k = k - 1;
            }

        }
    }
    if (k >= 0)
    {

        do
        {
            scanf_s("%d", &xx);
            s = s + xx;
        } while (s < z);
        l = s - z;
        printf("找您%d", l);
    }
    else
    {
        printf("缺货");
    }

    return 0;
}
