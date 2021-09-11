#include<stdio.h>
#include<stdlib.h>


void fun(int *a , int i)
{
	for( i ; i < 10 ; i++)
	{
		
			if(a[i] != 0)
			{
				int j;
				for( j = 0 ; j < a[i] ; j++)
				{
					printf("%d" , i);
				}
			}
	}
}
int main()
{
	int a[10];
	int i;
	for(i = 0 ; i < 10 ; i++)
	{
		scanf("%d" ,&a[i]);
	}
	
	if(a[0] != 0)
	{
		
		for( i = 1 ; i < 10 ; i++)
		{
			if(a[i] != 0)
			{
				printf("%d" , i);
				int j;
				for( j = 0 ; j < a[0] ; j++)
				{
					printf("%d" , 0);
				}
				for( j = 0 ; j < a[i]-1 ; j++)
				{
				 printf("%d" , i);
			    }
			    break;
			}
		}
		
       fun(a , i+1);
	}
	
	else
	{
		fun(a , 1 );
	}
	
	return 0;
}
