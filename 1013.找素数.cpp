//第一次通过的代码
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//链表结构体
typedef struct node
{
	int num;
	int n;
	struct node * p;
 } node ; 
 
//判断是否为素数 是就返回本身 不是就返回0 
 int pan_su(int num)
 {
 	int i;
 	for( i = 2 ; i <= sqrt(num ); i++ )
 	{
 		if( num % i == 0 )
 		{
		 return 0 ;
	    }
	 }
	 return num;
  } 
  
  //打印对应位置链表中的素数
  void show( node * temp  , int p1 , int p2)
  {
  	int i;
  	int n = 0;
  	for( i = 1 ; i < p2 ; i++)
  	{
  		if( temp->n >= p1 && temp->n < p2)
  		{
		  
		    n++;
			if(n%10 == 0)
  			{
  				printf("%d\n" , temp->num);
			  }
			  else
  			{
			  printf("%d " , temp->num);
  		    }
  		
  			
		  }
		  temp = temp->p;
	  }
	  printf("%d" , temp->num);
   } 
  
int main()
{
	
	int p1 , p2;
	
	scanf("%d %d" , &p1 , &p2);
	
	node *  head = (node *)malloc(sizeof(node));
	
	
	
	node * temp = head;
	
    int i  , n = 0;
    for( i = 2 ;  ; i++)
	{
	  if(  pan_su(i)   )
		 {
		 	n++;
			temp->num = i;
			temp->n = n;		
			temp->p = (node*)malloc(sizeof(node));
			temp = temp->p;
			if( n == p2)
			{
				break;
			}
			
		 }
		
	}
	
	show(head , p1 ,p2);
	

	return 0 ;
}



//改良代码

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//判断是否为素数 是就返回本身 不是就返回0 
 int pan_su(int num)
 {
 	int i;
 	for( i = 2 ; i <= sqrt(num ); i++ )
 	{
 		if( num % i == 0 )
 		{
		 return 0 ;
	    }
	 }
	 return num;
  } 
  
  //打印对应位置链表中的素数
  void show( int *a  , int p1 , int p2)
  {
  	int i;
  	int n = 0;
  	for( i = p1-1 ; i < p2-1 ; i++)
  	{
  		n++;
  		if(n%10 == 0)
  		{
  			printf("%d\n" , a[i]);
		  }
		  else
  		{
		  printf("%d " , a[i] );
	    }
	}
	printf("%d" , a[p2-1]);
  	
   } 
  
int main()
{
	
	int p1 , p2;
	scanf("%d %d" , &p1 , &p2);
    int   a[p2]; 	
    int i  , n = 0;
    for( i = 2 ;  ; i++)
	{
	  if(  pan_su(i)   )
		 {
		 	a[n] = i;
		 	n++;
			if( n == p2)
			{
				break;
			}
			
		 }
		
	}
	
	show(a , p1 ,p2);
	return 0 ;
}
