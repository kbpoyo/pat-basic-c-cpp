#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//对数字每一位数进行排序

int cmp_in (const void *a , const void* b)
{
	return *(char*)a - *(char*)b;
}

int cmp_de (const void *a , const void *b)
{
	return *(char*)b - *(char*)a;
}
	
//求字符串对应整数
int suan(char *s)
{
	int i;
	int sum = (int)s[0] - (int)'0';
	for(i = 1 ; i < strlen(s) ; i++)
	{
		sum = sum*10 + (int)s[i] - (int)'0';
	}
	return sum;
	
 } 
 
 //将数字转化为对应字符串
 void int_to_string( int num , char*s)
 {
 	int i ;
 	for( i = 3 ; i >= 0 ; i--)
 	{
 		s[i] = (char)(num % 10 + (int)'0');
 		num = num / 10;
 		
	 }
  } 
 
void fun(char* s)
{
	qsort(s , 4 , sizeof(s[0]) , cmp_de);
	char* s1 = s ;
	printf("%s - " , s1);
	int num1 = suan(s1);
	
	qsort(s , 4 , sizeof(s[0]) , cmp_in);	
	char* s2 = s;
	int num2 = suan(s2);
	printf("%s = " , s2);
	int num  = num1 - num2;
	char s3[4];
	
	int_to_string(num , s3);
	
	printf("%s" , s3);
	if( num == 6174 )
	{
		return;
	}
	else
	{
		printf("\n");
		fun(s3);
	}
	
}
int main()
{
	char s[4] ;
	scanf("%s" , s);
	if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3] )
	{
		printf("%s - %s = 0000" , s ,s);
	}
	
	else
	{
		if(strlen(s) < 4)
		{
			int num = suan(s);
			int_to_string(num , s);
		}
		
	fun(s);
    }
	return 0 ;
}
