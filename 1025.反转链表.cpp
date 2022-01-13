
#include<stdio.h>
#include<stdlib.h>


struct Node
{
	int  add, next;
	int   data;

}node[1000000];

int main()
{


	int  address;
	int  n, k;

	scanf("%d %d %d", &address, &n, &k);

	for (int i = 0; i < n; i++)
	{
		int  t_add;

		scanf("%d", &t_add);

		scanf("%d", &node[t_add].data);

		scanf("%d", &node[t_add].next);
		node[t_add].add = t_add;

	}
	int p1 = address;


	struct Node* p2 = (struct Node*)malloc(sizeof(struct Node[1000000]));

	for (int i = 0; i < n; i++)
	{
		p2[i].add = node[p1].add;

		p2[i].data = node[p1].data;

		p2[i].next = node[p1].next;
		p1 = node[p1].next;
		if (p1 == -1 )
		{
			n = i + 1;
		}
	}
	if (n == 1)
	{

		printf("%05d %d -1", p2[n - 1].add, p2[n - 1].data);
	}

	else if (n >= k && k > 0)
	{
		for (int i = 0; i < n / k; i++)
		{
			for (int j = (i + 1) * k - 1; j > i * k; j--)
			{
				/*cout << p2[j].add << " " << p2[j].data << " " << p2[j - 1].add << endl;*/
				printf("%05d %d %05d\n", p2[j].add, p2[j].data, p2[j - 1].add);
			}
			if (i == n / k - 1)
			{
				if (n % k == 0)
				{
					/*cout << p2[i * k].add << " " << p2[i * k].data << " " << "-1" << endl;*/
					printf("%05d %d -1\n", p2[i * k].add, p2[i * k].data);
					break;
				}
				else
				{
					/*cout << p2[i * k].add << " " << p2[i * k].data << " " << p2[(i + 1) * k].add << endl;*/
					printf("%05d %d %05d\n", p2[i * k].add, p2[i * k].data, p2[(i + 1) * k].add);

					for (int o = (i + 1) * k; o < n - 1; o++)
					{
						/*cout << p2[o].add << " " << p2[o].data << " " << p2[o].next << endl;*/
						printf("%05d %d %05d\n", p2[o].add, p2[o].data, p2[o + 1].add);

					}
					printf("%05d %d -1\n", p2[n - 1].add, p2[n - 1].data);
					break;
				}

			}
			printf("%05d %d %05d\n", p2[i * k].add, p2[i * k].data, p2[(i + 2) * k - 1].add);

		}


	}

	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			printf("%05d %d %05\n", p2[i].add, p2[i].data, p2[i].next);
		}
		printf("%05d %d -1\n", p2[n - 1].add, p2[n - 1].data);
	}

	return 0;
}
