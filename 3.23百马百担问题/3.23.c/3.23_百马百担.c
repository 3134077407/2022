#define _CRT_SECURE_NO_WARNINGS 1
//百马百担问题
#include <stdio.h>
int main()
{
    int a, b, c,t=0;
    for (a = 0; a <= 33; a++)
    {
        for (b = 0; b <= 50; b++)
        {
            c = 100 - a - b;
            if (c % 2 != 0) continue;  /*保证小马数量为偶数才可实现每两匹马驮一担*/
            if (3 * a + 2 * b + c / 2 == 100)
            {
                printf("%d,%d,%d\n", a, b, c);
                t++;
            }
        }
    }
    printf("共有%d种方法",t);
    return 0;
}
