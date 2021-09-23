#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//判断沙漏底边有多长
int fun(int n , char c)
{
	
	int len = 1;
	int sum = 0;
	while( 2*(sum + len) - 1 <= n)
	{
	    sum += len;
		len += 2;
	}

	len = len - 2;
    
	
	
	int i;
	for( i = len ; i >0 ; i = i-2)
	{
		int j;
		for( j = 0 ; j < (len - i)/2 ; j++)
		{
			printf(" ");
		}
		for( j = 0 ; j < i ; j++)
		{
			printf("%c" , c);
		}
		printf("\n");
	}
	
	for( i = 3 ; i <= len ; i = i + 2)
	{
		int j;
		for( j = 0 ; j < (len - i)/2 ; j++)
		{
			printf(" ");
		}
		for( j = 0 ; j < i ; j++)
		{
			printf("%c" , c);
		}
		printf("\n");
		
	}
 
	
	return n - (2*sum - 1);
 } 
int main()
{
	int n;
	char c;
	scanf("%d" , &n);
	scanf(" %c" , &c);
	int mod = fun(n , c);
	printf("%d" , mod);
	
	return 0;
 } 
