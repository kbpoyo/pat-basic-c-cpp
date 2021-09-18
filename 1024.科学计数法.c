#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//返回指数部分的符号位置
int index_e(char* s)
{
	int i;
	for(i = 1 ; i < strlen(s) ; i++)
	{
		if(s[i] == '+' || s[i] == '-')
		{
			return i;
		}
		else
		{
			continue;
		}
	}
 } 
 
 //将传入的字符串转化为整数
 int string_to_int(char* s , int i_e)
 {
 	int num = 0;
 	int i;
 	for( i = i_e+1 ; i < strlen(s) ; i++ )
 	{
 		num = num*10 + (int)s[i] - (int)'0';
	 }
	 return num;
  }
   
int main()
{
	char s[10010];
	scanf("%s" , s);
	
	int i_e = index_e(s);//得到指数前的符号在字符串中的下标 
	int len_f = i_e - 4; //小数部分的长度 
	
	if(s[0] == '-')
	{
		printf("-");
	}
	
	if(s[i_e] == '+')//小数点后移 
	{
		
		int e = string_to_int(s , i_e);
		if(s[1] > '0')
		{
			printf("%c" , s[1]);
			
		 } 
		 
		 
		 	if(len_f >= e )
		 	{
		 		int i ;
		 		for( i = 0 ; i < e ; i++)//将小数点后的e位移到小数点前 
		 		{
		 			printf("%c" , s[i+3]);
				 }
				 
				 if(len_f > e)
				 {
				 printf("." );
			     }
			     
				 for( i = 0 ; i < len_f - e ; i++)//打印出剩下的位数在小数点之后 
				 {
				 	printf("%c" , s[i+3 + e]);
				 }
			 }
		 
		 if(len_f < e)
		 {
		 	int i;
		 	for( i = 0 ; i < len_f ; i++)//直接打印出小数部分 
		 	{
		 		printf("%c" , s[i+3]);
			 }
			 
			 for( i = 0 ; i < e - len_f ; i++)//后面不足的位数用0补上 
			 {
			 	printf("0");
			 }
		  } 
		 
		
	 } 
	 
	 if(s[i_e] == '-')//小数点前移 
	 {
	 	int e = string_to_int(s , i_e);
	 	if(e > 0)
		 {
		 	printf("0.");//小数点前移了一位 
		 	int i;
		 	for( i = 0 ; i < e-1 ; i++)//用0补足前移的位数 
		 	{
		 		printf("0");
			 }
			 
			 printf("%c" , s[1]);//打印整数部分 
			 
			 for(i = 0 ; i < len_f ; i ++)//打印小数部分 
			 {
			 	printf("%c" , s[i+3]);
			  } 
		  } 
		  
		  if(e == 0)
		  {
		  	int i;
		  	for( i = 1 ; i < i_e-1 ; i++)
		  	{
			  printf("%c" , s[i]);
		    }
		   } 
	 }
	
	
	return 0;
 } 
