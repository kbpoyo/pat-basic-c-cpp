#include<stdio.h>

int main()
{
	int a_han[110] , a_hua[110] , a_he=0;
	int b_han[110] , b_hua[110] , b_he=0;
	int sum[110];
	int n;
	scanf("%d" , &n);
	int i; 
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d%d%d%d" , &a_han[i],&a_hua[i] , &b_han[i] , &b_hua[i]);
		sum[i] = a_han[i] + b_han[i];
		if(a_hua[i] == sum[i] && b_hua[i] != sum[i]) b_he++;
		if(b_hua[i] == sum[i] && a_hua[i] != sum[i]) a_he++;
	}
	printf("%d %d" , a_he,b_he);
	
	
	return 0;
 } 
