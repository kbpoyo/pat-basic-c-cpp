#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 //由字母判断是星期几
 
 void show_day(char s)
 {
	switch (s)
	{
	case 'A':
		printf("%s ", "MON");
		break;
	case 'B':
		printf("%s ", "TUE");
		break;
	case 'C':
		printf("%s ", "WED");
		break;
	case 'D':
		printf("%s ", "THU");
		break;
	case 'E':
		printf("%s ", "FRI");
		break;
	case 'F':
		printf("%s ", "SAT");
		break;
	case 'G':
		printf("%s ", "SUN");
		break;
	default: break;
	}
  } 
  
  
//判断是一天中的第几个钟头
void show_clock ( char s)
{
	if(s >= '0' && s <= '9')
	{
		printf("%02d:" , (int)s - 48);
	}
	else
	{
		printf("%02d:" , (int)s - 55);
	}
}
//判断第一个和第二个相同的大写字母
void pan_A(char *s1 , int n1  , char *s2 , int n2)
{
	int i;
	int n = n1 > n2 ? n2 : n1;
	int k = 0 ; //用来记录相同大写字母出现的次数 
	for( i = 0 ; i < n ; i++)
	{
		if( s1[i] == s2[i])
		{  
		
		   if( k== 1)
	      {
	      	if( (s1[i] >= '0' && s1[i] <= '9') ||(s1[i] >= 'A' && s1[i] <= 'N'))
	      	{
	      		show_clock(s1[i]);
	      		break;
			  }
			  else
			  {
			  	continue;
			  }
		  }
		  if(k == 0)
		  {
				if( s1[i] >= 'A' && s1[i] <= 'G' )
			 {
				k++;
				show_day(s1[i]);
			    		    
			 }
	      }
	      
	 
		}
	}
 } 
 
 
 //判断第二组字符串出现的第一个相同的字母出现的位置 
 void show_i(char *s1 , int n1 ,  char *s2 , int n2 )
 {
 	int i;
	int n = n1 > n2 ? n2 : n1;
 	for( i = 0 ; i < n ; i++ )
 	{
 		if(s1[i] == s2[i])
 		{
 			if( (s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z'))
 			{
 			 printf("%02d" , i);
			 }
		 }
	 }
  } 
 

int main()
{

    char s1[65];
	char s2[65];
	char s3[65];
	char s4[65];

    
    scanf("%s" , s1 );
    scanf("%s" , s2 );
    scanf("%s" , s3 );
    scanf("%s" , s4 );
    
    pan_A(s1 , strlen(s1)  , s2 , strlen(s2));
    show_i(s3 , strlen(s3) ,  s4 , strlen(s4) );
     
  
	
	return 0;
}
