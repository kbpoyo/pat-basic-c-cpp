#include<stdio.h>
#include<string.h>

int main()
{
	char s[100100];
	int a[128] = { 0 };
	int a_sum[100100] = { 0 };
	scanf("%s", s);
	char c = 'A';
	int k = 0;
	int index = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'T'&&c=='P')
		{
			a['T']++;
			a_sum[k] = a['A'];
			k++;
			continue;
		}
		else if (c == 'A'||c=='T')
		{

			c = s[i];
			if (c == 'P')
			{
				a['P']++;
				index = i;
			}

		}
		else
		{
			a[s[i]]++;
		}
	}

	long sum = 0;
	for (int l = 0; l < a['T']; l++)
	{
		sum += a_sum[l];
	}
	long num = sum;
	for (int i = index+1; i < strlen(s); i++)
	{
	
		
	     if(s[i] == 'A')
		{
			 num -=  a['T'];
			
		}
		if(s[i] =='P')
		{
			sum += num;
		
		}
		if (s[i] == 'T')
		{
			a['T']--;
		}
	}
	printf("%ld", sum%1000000007);
	

	return 0;
}

