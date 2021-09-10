#include<stdio.h>
#include<string.h>

//判断三个数的大小
int pan(int C, int J , int B)
{
	int k = B >= C ? B : C;
	int max = k >= J ? k : J;
	return max ;
 } 
 


int main()
{
	int  n;
	char A;
	char B;
	int  A_win_C = 0;
	int  A_win_J = 0;
	int  A_win_B = 0;
	int  B_win_C = 0;
	int  B_win_J = 0;
	int  B_win_B = 0;
	int  equle   = 0;
    scanf("%d" , &n);
    getchar();
    int i ;
	for( i = 0 ; i < n ; i++)
   {
   	//scanf("%c %c" , &A , &B);
     scanf("%c" , &A);
     //A = getchar();
     //getchar();
	 scanf(" %c" , &B);
	 //B = getchar();
	 getchar();
	 //printf("%c %c\n" , A ,B);

   	 if( A == 'C')
   	 {
   	 	if( B == 'J')
   	 	{
   	 		A_win_C++;
		}
		else if( B == 'B')
		{
			B_win_B++;
		}
		else
		{
			equle++;
		}
	}
	

	
	
	else if(A == 'J')
	{
			if( B == 'B')
   	 	{
   	 		A_win_J++;
		}
		else if( B == 'C')
		{
			B_win_C++;
		}
		else
		{
			equle++;
		}
	}
	

	
	else
	{
			if( B == 'C')
   	 	{
   	 		A_win_B++;
		}
		else if( B == 'J')
		{
			B_win_J++;
		}
		else
		{
			equle++;
		}
	}
	

   	 
   }
   int win_A = A_win_C + A_win_J + A_win_B;
   int win_B = B_win_C + B_win_J + B_win_B;
   
   printf("%d %d %d\n" , win_A , equle , n-win_A-equle);
   printf("%d %d %d\n" , win_B , equle , n-win_B-equle);
   
   int max_A = pan(A_win_C , A_win_J , A_win_B);
   int max_B = pan(B_win_C , B_win_J , B_win_B);
   
   if(max_A == A_win_B)
   {
   	printf("%c " ,'B');
   }
   else if(max_A == A_win_C)
   {
   	printf("%c " , 'C');
   }
   else
   {
   	printf("%c " , 'J');
   }
   
     if(max_B == B_win_B)
   {
   	printf("%c" ,'B');
   }
   else if(max_B == B_win_C)
   {
   	printf("%c" , 'C');
   }
   else
   {
   	printf("%c" , 'J');
   }
   
   

   	return 0;
}
