#include<stdio.h>
#include<stdlib.h>

int cmp(void* a , void*b )
{
	return *(int*)a<*(int*)b?-1:1;
}
int main()
{
	
  int n;
  scanf("%d" , &n);
 int a[100100];
 int b[100100];
 int c[100100];
 int sum = 0;
 int i;
 for(i = 0 ; i < n ; i++)
 {
 	scanf("%d" , &a[i]);
 	b[i] = a[i];
 }
 
 qsort(a,n,sizeof(a[0]) , cmp);

int max = 0;
 for(i = 0 ; i < n ; i++)
 {
 	if(b[i]>max) max = b[i];
 	if(max == b[i] && b[i] == a[i] ) c[sum++] = b[i];
 }

  printf("%d\n" , sum);
  if(sum != 0)
  { 
    
  	for(i = 0 ; i < sum-1 ; ++i)
    {
     	printf("%d " , c[i]);
    }
    printf("%d" , c[sum-1]);
  }
  else
  {
  	printf("\n");
  }
  
	return 0;
 }
