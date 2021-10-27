#include<stdio.h>

int main()
{
	int n;
	int a[101] = { 0 };
	scanf("%d", &n);
	int score;
	for (int i = 0; i < n; i++)
	{
		
		scanf("%d", &score);
		a[score]++;
	}
	int c_s;
	scanf("%d", &c_s);
	for (int i = 0; i < c_s; i++)
	{
		scanf("%d", &score);
		printf("%d", a[score]);
		if (i < c_s - 1)
		{
			printf(" ");
		}
	}

	return 0;
}
