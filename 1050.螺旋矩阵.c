#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const void* a, const void* b)
{
	return *(int*)a > *(int*)b ? -1:1;
}

int main()
{
	int N, m, n;
	scanf("%d", &N); 
	int i;
	for (i = (int)sqrt(N); i >= 1; i--)
	{
		if (N % i == 0)
		{
			n = i;
			m = N / i;
			break;
		}
	}

	int* sort = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &sort[i]);
	}
	qsort(sort, N, sizeof(int), cmp);
	int** arr = (int**)malloc(sizeof(int*) * m);
	for (i = 0; i < m; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * n);
	}

	int j = 0;
	int num = 0;
	int a = 0;
	i = 0;	
	
	while (num < N)
	{
		for (; j < n - a; j++)	arr[i][j] = sort[num++];
		j--;

		for (i = i + 1; i < m - a; i++)	arr[i][j] = sort[num++];
		i--;

		for (j = j - 1; j >= 0 + a; j--) arr[i][j] = sort[num++];	
		j++;

		for (i = i - 1; i >= 1 + a && num < N; i--)	arr[i][j] = sort[num++];		
		i++;

		j++;
		a++;
	}
	

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n - 1; j++) printf("%d ", arr[i][j]);
		printf("%d\n", arr[i][j]);
	}
	return 0;
}
