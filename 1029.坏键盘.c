#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//判断该键是否存在
int is_exist(char* c2 , char c1)
{
	int i;
	for( i = 0 ; i < strlen(c2) ; i++)
	{
		if(c1 == c2[i])
		{
			return 1;
		}
	}
	return 0;
 } 

//将字符串转换为大写
void uper(char*c3)
{
	int i;
	for( i = 0 ; i < strlen(c3) ; i++)
	{
		if(c3[i] >= 'a' && c3[i] <= 'z')
		{
			c3[i] = (char)( (int)c3[i] - ( (int)'a' - (int)'A') ) ;
		}
		else
		{
			continue;
		}
	}
 } 
//将字符串中相同的元素删除
char* clean(char*c3)
{
	char* c4 = (char*)malloc(sizeof(char[90]));
	int i;
	int j;
	int num = 0;
	for( i = 0 ; i < strlen(c3) ; i++)
	{
	   if(!is_exist(c4 , c3[i]))
	   {
	   	c4[num] = c3[i];
	   	num++;
	   }
	}
	return c4;
 } 
 
 
int main()
{
	char c1[90];
	char c2[90];
	scanf("%s %s" , c1 , c2);
	char c3[90];
	
	int i;
	int j = 0;
	for(i = 0 ; i < strlen(c1) ; i++)
	{
		if( !is_exist(c2 , c1[i]) ) 
		{
			c3[j] = c1[i];
			j++;
		}
		else
		{
			continue;
		}
	}
	
    uper(c3);
    char* c4 = clean(c3);
	printf("%s" , c4);
	
	
	return 0;
}
