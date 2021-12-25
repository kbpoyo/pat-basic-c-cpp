#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[1010] = {0};
	int teNum , peNum , score = 0;
	int n;
	scanf("%d" , &n);
	int i;
	for(i = 0; i < n ; i++ )
	{
		
		scanf("%d%d%d" , &teNum , &peNum , &score );
		a[teNum] += score;
	}
	int max = 0 , index;
	for(i = 0 ; i < 1001 ; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			index = i;
		}
	}
	
	printf("%d %d" , index,a[index]);	
	return 0;
  }  
