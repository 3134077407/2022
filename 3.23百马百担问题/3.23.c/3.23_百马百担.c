#define _CRT_SECURE_NO_WARNINGS 1
//����ٵ�����
#include <stdio.h>
int main()
{
    int a, b, c,t=0;
    for (a = 0; a <= 33; a++)
    {
        for (b = 0; b <= 50; b++)
        {
            c = 100 - a - b;
            if (c % 2 != 0) continue;  /*��֤С������Ϊż���ſ�ʵ��ÿ��ƥ����һ��*/
            if (3 * a + 2 * b + c / 2 == 100)
            {
                printf("%d,%d,%d\n", a, b, c);
                t++;
            }
        }
    }
    printf("����%d�ַ���",t);
    return 0;
}
