/*
    ��дһ�γ�������һ��������������������ʾ������������Ľ�������״��

    �����������һ����������
    �������м��㣺3
      *
     ***
    *****

*/

#include <stdio.h>

int main(void)
{
    int i, j, n;

    puts("�����������һ����������");
    printf("�������м��㣺");
    scanf("%d", &n);

    for (i = 1; i <= n + i - 1; i++) {
        for (j = 1; j <= n - 1; j++) {
            putchar(' ');
        }
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        for (j = 1; j < i; j++) {
            putchar('*');
        }
        n--;
        putchar('\n');
    }

    return (0);
}