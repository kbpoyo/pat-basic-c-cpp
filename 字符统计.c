#include<stdio.h>
#include<string.h>

void strlower(char*s)
{
	int i;
	for( i = 0 ; i < strlen(s) ; i++)
	{
		if(s[i]>='A' && s[i] <= 'Z')
		{
			s[i] += 'a' - 'A'; 
		}
	
	}
}
int countstr(char* s , int *a)
{
	char str[1010];
	strcpy(str,s);
    strlower(str);
	int i;
	for(i = 0 ; i < strlen(str) ; i++)
	{
		if(str[i]>='a' && str[i] <='z')
		{
			a[str[i]]++;
		}
		
	}

	int max = a[0];
	int index = 0;
	for(i = 0; i < 128 ; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			index = i;
		}
	}
	return index;
 } 
int main()
{
	char s[1010];
	int a[128] = {0};
	gets(s);
	int index = countstr(s,a);
	printf("%c %d" , (char)index , a[index]);
	
	int max;
	
	return 0;
 } 
