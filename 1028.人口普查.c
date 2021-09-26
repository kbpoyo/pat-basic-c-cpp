#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//人的结构体
typedef struct person
{
	char name[6] ;
	char age[11];
	
 } person ;
 
 //将对应字符串转化为数字
 int string_to_int(char* c , int n)
 {
 	int sum = 0;
 	int i;
 	for( i = 0 ; i < n ; i++)
 	{
 		sum = sum*10 + (int)c[i] - (int)'0';
	 }
	 return sum;
  } 
  
  
 //给结构体赋值并返回有效生日个数 
 int fuzhi(person* p , int n)
 {
 	int i;
 	int sum = 0;
    char name[6];
    char age[10];
    
 	for(i = 0 ; i < n ; i++)
 	{
 		scanf("%s" , name);
 		scanf("%s" , age);
 		
 		if( string_to_int(age , 4) > 1814 && string_to_int(age , 4) <2014)
 		{
 			strcpy(p[sum].name  , name);
 			strcpy(p[sum].age   , age);
 			sum++;
		 }
		 else if(string_to_int(age , 4) == 1814 && string_to_int(&age[5] , 2) > 9  || string_to_int(age , 4) == 1814 && string_to_int(&age[5] , 2) == 9 && string_to_int(&age[8] , 2) >=6 )
		 {
		 	strcpy(p[sum].name  , name);
 			strcpy(p[sum].age   , age);
 			sum++;
		 }
		 else if(string_to_int(age , 4) == 2014 && string_to_int(&age[5] , 2) < 9  || string_to_int(age , 4) == 2014 && string_to_int(&age[5] , 2) == 9 && string_to_int(&age[8] , 2) <=6)
         {
         	strcpy(p[sum].name  , name);
 			strcpy(p[sum].age   , age);
 			sum++;
		  }	
		  else
		  {
		  	continue;
		  }
		  
		   
	 }
	 
	 return sum;
  } 
  
//按年龄升序排列
int cmp(void* a , void* b)
{
	person* c = (person*)a;
	person* d = (person*)b;
	
	return strcmp(c->age , d->age);
 } 
  
int main()
{
	int n;
	scanf("%d" , &n);
	person p[100010];
	int p_num = fuzhi(p , n);
	
	if( p_num != 0)
	{
	printf("%d " , p_num);
	qsort(p , p_num , sizeof(p[0]) , cmp);
	printf("%s %s" , p[0].name , p[p_num - 1].name );
    }
    else
    {
    	printf("0");
	}

	
	return 0;
 } 
