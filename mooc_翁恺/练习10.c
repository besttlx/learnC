/* ���������10�֣�
��Ŀ���ݣ�
��ĳ�������һϵ�е���������Ԥ�Ȳ�֪����������������һ������-1���ͱ�ʾ���������Ȼ�󣬰��պ������෴��˳����������������֣�����������ʶ������-1��

�����ʽ:
һϵ��������������-1��ʾ������-1������������ݵ�һ���֡�

�����ʽ��
�����������෴��˳��������е�������ÿ�����������һ���ո����������������֣�������������Ҳ�пո�

����������
1 2 3 4 -1

���������
4 3 2 1
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb  */


#include <stdio.h>
#include <stdlib.h>
typedef struct _node {
    int value;
    struct _node *before; }
Node;
int main() {
    Node * head = NULL;
    int number;
    do {
            scanf("%d", &number);
    if ( number != -1) 		{
            Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->before = head;
    head = p; 		} 	}
    while ( number != -1);
    Node *p;
    for ( p = head; p; p=p->before) {
            printf("%d ", p->value);
    }
return 0;
}
