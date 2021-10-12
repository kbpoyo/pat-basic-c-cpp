#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}

int fun_pan(char* s)//判断身份证是否正常
{
	int i;
	for (i = 0; i < 17; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return 0;
		}
	}

	return 1;
}

int fun_quan(char* s)//计算权重
{
	int a[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int sum = 0;
	int i;
	for (i = 0; i < 17; i++)
	{
		sum += ((int)s[i] - (int)'0') * a[i];
	}
	int k = sum % 11;
	return k ;
	
}
int main()
{
	int n;
	scanf("%d", &n);
	char** s = (char**)malloc(sizeof(char*) * (n+1));
	int* d = (int*)malloc(sizeof(int) * n);
    int * quan = (int*)malloc(sizeof(int)*n);
	int i;
	for (i = 0; i < n; i++)
	{
		d[i] = 1;
	}
	for (i = 0; i < n; i++)
	{
		s[i] = (char*)malloc(sizeof(char[18]));
	}

	for (i = 0; i < n; i++)
	{
		scanf("%s", s[i]);
	}

	

	for (i = 0; i < n; i++)
	{
		if (fun_pan(s[i]) == 0)
		{
			quan[i] = i;
			d[i] = 0;
		}
		else
		{
			quan[i] = fun_quan(s[i]);
			

		}
	}
	int b[11] = { 1, 0, (int)'X'-(int)'0' , 9, 8, 7, 6, 5, 4, 3, 2};
	for (i = 0; i < n; i++)
	{
		if (d[i] == 1)
		{
			if (b[quan[i]] != (int)s[i][17] - (int)'0')
			{
				d[i] = 0;
			}
		}
	}
	int p = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i] == 0)
		{
			p++;
		}
	}
	if (p == 0)
	{
		printf("All passed");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (d[i] == 0)
			{
				printf("%s", s[i]);
				p--;
				if (p != 0)
			    {
				   printf("\n");
			     }
			}
			
		}
	}





	return 0;
}

