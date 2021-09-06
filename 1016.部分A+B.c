#include <stdio.h> 
#include <string.h>

//取出数字中的 D 部分 赋值给 P
int D_P( char * A , int Da)
{
	int n = strlen(A);
	int i , P = 0;
	for( i = 0 ; i < n ; i++)
	{
		if( (int)A[i] - (int)'0' == Da)
		{
			if( P == 0)
			{
				P = Da;
		    }
			else
			{
			  P = P*10 + Da;
			}
			
		}
	}
	return P;
 } 
 
 
int main()
{
	char A[10] , B[10];
	int Da , Db;
	scanf("%s %d %s %d" , &A , &Da , &B , &Db);
	
	int Pa = D_P( A , Da);
	int Pb = D_P( B , Db);
	
	printf("%d" , Pa + Pb);
	
	return 0;
}
