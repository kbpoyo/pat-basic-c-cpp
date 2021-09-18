#include<stdio.h>

int main()
{
	int c1 , c2;
	scanf("%d %d" , &c1 , &c2);
	
	double c = (double)(c2-c1)/100;
	int h = (int)c/3600;
	int d = ((int)c%3600) / 60;
	double s =  c - h*3600 - d*60;
	if(s - (int)s >= 0.5)
	{
		s = (int)s + 1;
	}
	else
	{
		s = (int)s;
	}
	printf("%02d:%02d:%02d" , h , d ,(int)s);
	return 0;
}
