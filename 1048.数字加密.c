#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	
	char a[110];
	char b[110];
	char c[14] = "0123456789JQK";
	scanf("%s %s" , a , b );
    int len_b = strlen(b);
    int len_a = strlen(a);
    int max = len_b>len_a?len_b:len_a;
	int i;
	for(i = 0  ; i < max; i++)
	{
		int B = len_b+i - max <0 ? 0 : b[len_b + i - max] - '0';
		int A = len_a+i - max <0 ? 0 : a[len_a + i - max] - '0';
		int C;
	    
	   if((max - i)%2 == 0)
	   {
	   	 C = B-A < 0 ? B-A +10 :B-A;
	   }
	   else
	   {
	   	C = (B+A)%13;
	   }
	   printf("%c" , c[C]);    	
	    
	 } 
	
	 	
	
	return 0;
  }  
