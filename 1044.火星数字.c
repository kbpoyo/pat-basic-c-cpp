#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    char** str_g;
    char** str_s;

	  
void translation(char* str)
{
	if(str[0] >= '0' && str[0] <= '9')
	{
		int num;
		sscanf(str,"%d", &num);
		int Shang = num/13;
		int Yu = num%13;
		if(Shang != 0)
		{
			printf("%s" , str_s[Shang]);
			if(Yu != 0)
			{
			printf(" %s" , str_g[Yu]);	
			}
			
			
		}
		else
		{
			printf("%s" , str_g[Yu]);	
		}
		
		
	}
	else
	{
		
	char c[4];
	sscanf(str,"%3s" , c);
	int sum = 0;
		
   int i;
   for(i = 1 ; i <= 12 ; i++ )
   {
   	  if(strcmp(c,str_s[i]) == 0)
   	  {
   	     sum = i*13;
   	     break;
	  }
   }	


   for(i = 0 ; i <= 12 ; i++ )
   {
   	  if(strcmp(&str[strlen(str) > 3 ? 4 : 0],str_g[i]) == 0)
   	  {
   	     sum += i;
   	     break;
	  }
   }
   
   printf("%d" , sum);

		
	}
}

int main()
{
	
	 str_g = (char**)malloc(sizeof(char*[15]));
     str_s = (char**)malloc(sizeof(char*[14]));

	//火星文个位 
	str_g[0] = "tret";
	str_g[1] = "jan",str_g[2] = "feb" , str_g[3] = "mar";
	str_g[4] = "apr" , str_g[5] = "may" , str_g[6] = "jun";
	str_g[7] = "jly" , str_g[8] = "aug" , str_g[9] = "sep";
	str_g[10] = "oct" , str_g[11] = "nov" , str_g[12] = "dec";
	
	//火星文进位
	str_s[1] = "tam" , str_s[2] = "hel" , str_s[3] = "maa";
	str_s[4] = "huh" , str_s[5] = "tou" , str_s[6] = "kes";
	str_s[7] = "hei" , str_s[8] = "elo" , str_s[9] = "syy";
	str_s[10] = "lok" , str_s[11] = "mer" , str_s[12] = "jou";
	  
	  int n ;
	  char str[10];
	  scanf("%d" , &n);
	  getchar();
	  int i ;
	  for(i = 0 ; i < n ; i++)
	  {
	  	 gets(str);
	  	 translation(str);
	  	 if(i != n-1)
	  	 {
	  	 	printf("\n");
		   }
	  }
	
	
	
	
	return 0;
}
