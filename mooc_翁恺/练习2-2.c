/*
�źű��棨5�֣�
��Ŀ���ݣ�
���ߵ�̨��RS���źű�������������������ɵģ�
*R(Readability) �źſɱ�ȼ�������.
*S(Strength)    �ź�ǿ�ȼ���С.
����Rλ�ڱ����һλ������5������1��5���ֱ�ʾ.
1.Unreadable
2.Barely readable, occasional words distinguishable
3.Readable with considerable difficulty
4.Readable with practically no difficulty
5.Perfectly readable
����ڶ�λ��S�����־Ÿ�������1��9�е�һλ���ֱ�ʾ
1.Faint signals, barely perceptible
2.Very weak signals
3.Weak signals
4.Fair signals
5.Fairly good signals
6.Good signals
7.Moderately strong signals
8.Strong signals
9.Extremely strong signals
���ڣ���ĳ���Ҫ����һ���źű�������֣�Ȼ�������Ӧ�ĺ��塣�����59���������

Extremely strong signals, perfectly readable.

�����ʽ:
һ���������źű��档������ʮλ���ֱ�ʾ�ɱ�ȣ���λ���ֱ�ʾǿ�ȡ������������Χ��[11,59]�еĸ�λ��Ϊ0�����֣������Χ������ֲ����ܳ����ڲ��������С�

�����ʽ��
һ�仰����ʾ����źű�������塣������Ŀ�е����֣��������ʾǿ�ȵ����֣����϶��źͿո�Ȼ���Ǳ�ʾ�ɱ�ȵ����֣����Ͼ�š�ע��ɱ�ȵľ��ӵĵ�һ����ĸ��Сд�ġ�ע������ı����Ŷ���Ӣ�ĵġ�

����������
33

���������
Weak signals, readable with considerable difficulty.
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include <stdio.h>

int main(){
	
	int a, b, c;
	
	//��������
	scanf("%d", &a);
	
	if ( 11 <= a){
		if ( a <= 59){
		
	//��������
	b = a % 10;
	c = a / 10; 
	
	if ( b != 0){
	
	
	switch ( b ){
		case 1: printf("Faint signals, barely perceptible, "); break;
		case 2: printf("Very weak signals, "); break;
		case 3: printf("Weak signals, "); break;
		case 4: printf("Fair signals, "); break;
		case 5: printf("Fairly good signals, "); break;
		case 6: printf("Good signals, "); break;
		case 7: printf("Moderately strong signals, "); break;
		case 8: printf("Strong signals, "); break;
		case 9: printf("Extremely strong signals, "); break;
	}
	

	
	switch ( c ){
		case 1: printf("unreadable."); break;
		case 2: printf("barely readable, occasional words distinguishable."); break;
		case 3: printf("readable with considerable difficulty."); break;
		case 4: printf("readable with practically no difficulty."); break;
		case 5: printf("perfectly readable."); break;
	}
	

	}
	}
	}
	return 0;
	

}
