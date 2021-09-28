#include<stdio.h>
#include<stdlib.h>


 int cmp(void* a , void* b)
 {
 	return *(int*)a - *(int*)b;
 }
 
int main()
{

   int n; 
   long int p;
   long int a[100010];
   scanf("%d %ld" , &n ,&p);
   int i;
   for(i = 0 ; i < n ; i++)
   {
   	scanf("%ld" , &a[i]);
	} 
	
	qsort(a , n , sizeof(a[0]) , cmp);
	
	int maxlen = 0;//记录现在的完美数列长度
	int j;
	for( i = 0 ; i < n ; i++)
	{
		for(j = i + maxlen ; j < n ; j++)//上一个数作为最小值的完美数列长度为maxlen 所以直接对这一个数后面maxlen+1位数做判断即可
		{
			if(a[j] > a[i]*p)
			{
				break;
			}
			else
			{
				maxlen++;
			}
		}
	}
	printf("%d" , maxlen);
	
	return 0;
}
