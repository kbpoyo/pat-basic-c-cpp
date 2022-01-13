#include<stdio.h>
#include<stdlib.h>

int cmp(void* a , void* b)
{
	return *(int*)a<*(int*)b?-1:1;
}

void Mergsort(int*a , int n)
{
	int k = 2;
	int i , j;
	int b [1100];
	memcpy(b,a,sizeof(int)*n);
	while( n >= k )
	{
		int tatleNum = n/k;
		for(i = 0,j = 0 ; i < tatleNum ; i ++ ,  j += k)
		{
		   qsort(a+j , k, sizeof(a[0]) , cmp);
		}
		   qsort(a+j, n-k*tatleNum,sizeof(a[0]),cmp);
		if(memcmp(a , b , sizeof(int)*n) != 0)
		{
		return;
		}
		k*=2;
		
	}
	qsort(a,n,sizeof(a[0]),cmp);
}

void insertSort(int*a , int n)
{
	int i;
	int index=0;
	for(i = 0 ; i < n-1 ;i++)
	{
		if(a[i] > a[i+1]) 
		{
			index = i+1;
			break;
		}
	}
	
	int num = a[index];
	i = index;
	while(num< a[i-1] && i > 0 )
	{
		a[i] = a[i-1];
		i--;			
	} 
	 
	 a[i] = num;
}
int main()
{
	int input[1100];
	int midsort[1100]; 
	int sort[1100];
	int n , flag = 0;
	scanf("%d", &n);
	int i;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d" , &input[i]);
	}
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d" , &midsort[i]);
		sort[i] = midsort[i];
	}
	
	qsort(sort,n,sizeof(int),cmp);
	while( memcmp(input , sort , sizeof(int)*n) != 0)
	{
		Mergsort(input,n);
		if(memcmp(input , midsort,sizeof(int)*n) == 0)
		{
			flag = 1;
			break;
		}
	
	}
	
	if(flag == 1)
	{
		printf("Merge Sort\n");
		Mergsort(midsort,n);
		
	}
	else
	{
		printf("Insertion Sort\n");
		insertSort(midsort,n);
        
	}
	
	for(i = 0 ; i < n-1 ; i++)
	{
		printf("%d " , midsort[i]);
		
	}
	printf("%d" , midsort[n-1]);
	
	
	return 0;
}
