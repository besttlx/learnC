/*
    ��дһ�γ���ʹ�ö�ά�������5��ѧ��3����Ŀ�����ġ���ѧ��Ӣ��ķ�����������´���
    ��1������ÿ�Ƶ���߷֡�
    ��2������ÿ��ѧ��3����Ŀ��ƽ���֡�
*/

#include <stdio.h>

#define NUMBER 5
#define COUNT 3

int max_of(int vc[], int no)
{
    int i;
    int max = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] > max)
            max = vc[i];
    return (max);
}

double avg_of(double vc, int no)
{
    return (vc / no);
    
}

int main(void)
{
    int i, j;
    int vc[NUMBER][COUNT];
    int chi[NUMBER];
    int eng[NUMBER];
    int mat[NUMBER];
    int max_c, max_e, max_m;
    int avg[NUMBER];


    printf("������%d��ѧ���ķ�����\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        puts("���ġ���ѧ��Ӣ�");
        for (j = 0; j < COUNT; j++) {
            putchar('=');
            scanf("%d", &vc[i][j]);
        }
    }

    for (i = 0; i < NUMBER; i++) {
        chi[i] = vc[i][0];
        eng[i] = vc[i][1];
        mat[i] = vc[i][2];

    }

    max_c = max_of(chi, NUMBER);
    max_e = max_of(eng, NUMBER);         
    max_m = max_of(mat, NUMBER);         

    printf("���ĵ���߷�=%d\n", max_c);
    printf("Ӣ�����߷�=%d\n", max_e);
    printf("��ѧ����߷�=%d\n", max_m);

    
        for (i = 0; i < NUMBER; i++){
            avg[i] = vc[i][0] + vc[i][1] + vc[i][2];
            printf("%dƽ����:%.2f\n", i, avg_of(avg[i], COUNT));
        }
    
    

    return (0);
}