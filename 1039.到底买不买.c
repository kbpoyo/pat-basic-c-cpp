#include<stdio.h>
#include<string.h>

int main()
{
	int a[128] = { 0 };


	char s_c[1010];
	char s_r[1010];

	scanf("%s %s", s_c, s_r);

	for (int i = 0; i < strlen(s_c); i++)
	{
		a[s_c[i]]++;
	}

	for (int i = 0; i < strlen(s_r); i++)
	{
		a[s_r[i]]--;
	}

	int sum_d = 0 , sum_c = 0;

	for (int i = 0; i < 128; i++)
	{
		if (a[i] >= 0)
		{
			sum_d += a[i];
		}
		else
		{
			sum_c -= a[i];
		}
	}

	if (sum_c != 0)
	{
		printf("No %d", sum_c);
	}
	else
	{
		printf("Yes %d", sum_d);
	}
	


	return 0;
}
