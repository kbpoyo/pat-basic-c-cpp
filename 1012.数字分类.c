#include<stdio.h>


//判断每个数除以5的余数
void device_5(int *a , int n)
{
	int i;
	int A1 = 0,A2 = 0,A3 = 0,A5 = 0;

	int a2 = 0;

	
	double A4 = 0;
	int a4 = 0;
	for(i = 0 ; i < n ; i++)
	{
	    int mod = a[i]%5;
	    
	    switch ( mod )
	    {
		
		  case 0:
	            {
	            	
 	               if(a[i]%2 == 0)
	                 {
		               A1 += a[i];
	                 }
	               else
	                {
	                	continue;
	                }
	            };break;
	       case 1:
		        {
		        
		        	if( a2 % 2 == 0)
		        	{
		        		A2 += a[i];
					}
					else
					{
						A2 -= a[i];
					}
					a2++;
		   	       
				};break;     
			case 2:
				  {
				  	A3++;
				  	
				  };break;
			
			case 3:
				  {
				  	a4++;
				  	A4 += a[i]; 
				  };break;
		    
		    case 4:
		    	  {
		    	  	if(a[i] > A5)
		    	  	{
		    	  		A5 = a[i];
					  }
				  };break;
			default : break;
        }
   }
   
   if(a4 != 0)
   {
   A4 = A4/a4;
   } 
   if(A1 == 0 )
   {
   	printf("N ");
   }
   else
   {
   	printf("%d " , A1);
   }
   
   if(a2 == 0 )
   {
   	printf("N ");
   }
   else
   {
   	printf("%d " , A2);
   }
   if(A3 == 0 )
   {
   	printf("N ");
   }
   else
   {
   	printf("%d " , A3);
   }
   if(A4 == 0)//A4 >= -1e-6 && A4 <= 1e-6 )
   {
   	printf("N ");
   }
   else
   {
   	printf("%.1f " , A4);
   }
   if(A5 == 0 )
   {
   	printf("N");
   }
   else
   {
   	printf("%d" , A5);
   }
 } 
int main()
{
	int n;
	scanf("%d" , &n);
	int a[1010];
	int i ;
	for( i = 0 ; i < n ; i++)
	{
		scanf("%d" , & a[i]);
	}
	device_5(a , n);
	return 0;
 } 
