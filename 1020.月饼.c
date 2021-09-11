#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//月饼的结果体
typedef struct yuebing
{
	double kucun;
	double lingsou;
	int    zongsou;

 } yuebing;
 
 //按月饼的零售价降序排列
int cmp( const void* a ,const void* b)
{
	yuebing* c = (yuebing*)a;
	yuebing* d = (yuebing*)b;
	
	return c->lingsou < d->lingsou ? 1 : -1;
 } 
 
 //给月饼库存量赋值
 void fuzhi_kucun(yuebing* yue , int n)
 {
 	int i;
 	for( i = 0 ; i < n ; i++)
 	{
 		double k;
 		scanf("%lf" , &k);
 		yue[i].kucun = k;
 		
	 }
  } 
  
  //给月饼零售价赋值
   void fuzhi_lingsou(yuebing* yue , int n)
   {
   	int i;
   	for( i = 0 ;  i < n ; i++)
   	{
   		double k ;
   		scanf("%lf" , &k);
   		yue[i].lingsou = k / yue[i].kucun;
   		yue[i].zongsou = (int)k;
   		
	   }
   }
   
  //输出最高收入
  void maxprofit(yuebing* yue , int n , int xuqiu)
  {
  	int i;
  	double sum = 0;
  	 for(i = 0 ; i < n ; i++)
  	 {
  	 	if( (int)yue[i].kucun <= xuqiu)
  	 	{
  	 		sum += (double)yue[i].zongsou;
  	 		xuqiu -= (int)yue[i].kucun ;
		   }
		   
		else
		{
			sum += xuqiu*yue[i].lingsou;
			break;
		}
	   }
	   
	   printf("%.2f" , sum);
   } 
int main()
{
	int n ;
	int xuqiu;
	scanf("%d %d" , &n , &xuqiu );
	
	//创建结构体数组
	yuebing* yue = (yuebing*)malloc(sizeof(yuebing[n])); 
	
	fuzhi_kucun( yue , n);
	fuzhi_lingsou( yue , n);

	qsort(yue , n , sizeof(yue[0]) , cmp);

	maxprofit(yue , n ,  xuqiu);
	
	
	
	return 0;
}
