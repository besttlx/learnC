/*��������5�֣�
��Ŀ���ݣ�
��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
������1234���������
yi er san si
ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո񡣵���������ʱ��������Ŀ�ͷ���ϡ�fu������-2341���Ϊ��
fu er san si yi

�����ʽ:
һ����������Χ��[-100000,100000]��

�����ʽ��
��ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�

����������
-30

���������
fu san ling
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb  */


#include <stdio.h>
#include <math.h>
main()
{
    int x;
    scanf("%d", &x);
    int cnt = 0;
    int t;
    int y;

    if (x < 0)
    {
        t = -x;
    }
    else t = x;
    
    do
    {
        t = t / 10;
        cnt++;
    } while (t > 0);
    
    y = pow(10, (cnt - 1));
    
    if (x < 0)
    {
        printf("fu ");
        t = -x;
    }
    else t = x;
    
    do
    {
        switch (t / y)
        {
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        }
        if (y > 9)
        {
            printf(" ");
        }
        t = t%y;
        y = y / 10;
    } while (y > 0);
    
    return 0;
}
