#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 #define max 100000
//创建序列 
typedef struct xulie
{
	int a[max];
	int lenth; 
} xulie;

//往序列插入数据
void cha( xulie *A  )
{
   scanf("%d" , &A->a[A->lenth]) ;
	char c = getchar();
	if(c == ' ')
	{
		A->lenth++;
	}
    
 } 
 
int main()
{
	xulie A;
	A.lenth = 0;
	int i;
	for( i = 0 ;  ; i++)
	{
		xulie temp = A;
		cha(&A);
		if( temp.lenth == A.lenth)
		{
			A.lenth++;
			break;
		}
	}
	
	int b[A.lenth];
	
	for( i = 0 ; i < A.lenth ; i = i+2)
	{
		
		
			b[i] = A.a[i]*A.a[i+1];
		
		
		
			b[i+1] = A.a[i+1]-1;
		
	}

if(A.lenth > 2)
{
		
	for( i = 0 ; i < A.lenth-3 ; i++)
	{
		printf("%d " , b[i] );
	}
	
	if(A.a[A.lenth-1] != 0)
	{
	printf("%d " , b[A.lenth-3]);
	printf("%d " , b[A.lenth-2]);
	printf("%d" , b[A.lenth-1]);
    }
    
    else
    {
    	printf("%d" , b[A.lenth-3]);
	}
}

else
{
	if(b[0] != 0)
	{
		printf("%d %d" , b[0] , b[1]);
	}
	else
	{
		printf("%d %d" , 0 , 0);
	}
}
	

	
  return 0;
}
