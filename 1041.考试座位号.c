#include<stdio.h>
#include<string.h>

typedef struct Stu
{
	char Z[17];
	int  z;
	  
}Stu;

int main()
{
	int n;
	Stu stu[1010];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char s[17];
		int n1 , n2 ;
		scanf("%s%d%d", s, &n1, &n2);
		strcpy(stu[n1].Z, s);
		stu[n1].z = n2;
		
	}

	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int z;
		scanf("%d", &z);
		printf("%s %d", stu[z].Z, stu[z].z);
		if (i != m - 1)
		{
			printf("\n");
		}

	}

	

	return 0;
}

