/*
    �����������ʼ����ֵ�õ����ַ���str��ɿ��ַ��������д����ʵ�֡�
        char str[] = "ABC";
*/

#include <stdio.h>  

int main(void)  
{  
  char str[] = "ABC";  
    
  str[0] = '\0';  
    
  printf("�ַ���strΪ%s��\n", str);  
    
  system("pause");  
  return (0);      
}  