/*������5�֣�
��Ŀ���ݣ�
һ�������������������п���������������������һ�������ǡ�õ��ڳ��������������֮�ͣ�������ͳ�Ϊ����������6=1��2��3(6��������1,2,3)��

���ڣ���Ҫдһ�����򣬶�������������n��m��1<=n<m<1000�������[n,m]��Χ�����е�������

��ʾ������дһ���������ж�ĳ�����Ƿ���������

�����ʽ:
�������������Կո�ָ���

�����ʽ��
������е��������Կո�ָ������һ�����ֺ���û�пո����û�У������һ�����֣�
NIL
�����NIL������д��ĸ�ӻس�����

����������
1 10

���������
6
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb  */

/*
# include <stdio.h> 
int w(int n) 
{  
int i,s = 0;  	
for ( i = 1; i < n; ++i) { 		
	if ( n%i == 0){ 			
		s += i; 		
		}
	} 	
	if ( n == s) 	
		return 1; 	
	else  	
		return 0; 
} 
int main() { 	
	int i,j,k,c = 0; 	
	scanf("%d%d",&i,&j); 	
	for ( k = i; k <= j; ++k) { 		
		if (w(k)) { 			
			if ( c == 2) 			
			printf(" "); 			 			
			printf("%d",k); 				
			c = 1; 			    
			c++; 		 		
			} 	
		} 	
		if ( k == j+1 && c != 0) 	
			printf("\n"); 	
		if (c == 0 ) 	
			printf("NILn"); 	
	return 0; 
}
*/

#include <stdio.h>
#include <math.h>
int perfNumber(int i);
int main(int argc, const char * argv[]) {
    // insert code here...
    // TODO Auto-generated method stub
    int n,m;
    scanf("%d %d",&n,&m);
    int b=0;
    for(int i=n+1;i<m;i++)
    {
         
        if(perfNumber(i))
        {
            if(!b)
            {
            printf("%d",i);
            b=1;
            }
            else
            {
                    printf(" %d",i);
            }
        }
    }
    if(!b)
    {
        printf("NIL");
    }
    printf("\n");
}
int perfNumber(int i)
{
    int per=1;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            per+=j;
        }
    }
    if(per!=i)
    {
        i=0;
    }
        return i;
}
