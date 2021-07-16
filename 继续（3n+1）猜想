#include<iostream>
using namespace std;
#include<string>
struct arry
{
	int arr[100];
	int cisu;
};
//判断奇偶 偶数返回 1 奇数返回 -1
int jiou(int num)
{
	if (num == 1)
	{
		return 0;
	}

	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
//往结构体里储存每一个数可以覆盖的数

void work(int* a , int n , struct arry *pernum_arr)
{
	
	for (int i = 0; i < n; i++)
	{
		int key = 1;
		int cisu = 0;
		while (key)
		{
		
			 key = jiou(a[i]);
			if (key == 1)
			{
				pernum_arr[i].arr[cisu] = a[i];
				a[i] = a[i] / 2;
				
				
			}
			else if(key == -1)
			{
				pernum_arr[i].arr[cisu] = a[i];
				a[i] = (3 * a[i] + 1) / 2;
				
			}

			cisu++;
			
		}
		pernum_arr[i].cisu = cisu - 1;
	}
	
}
//删除关键数数组中相同的数
void deletes(int* b , int num)
{
	int *a = new int[100] ;
	int num1 = 0;
	for (int i = 0; i < num; i++)
	{
		int k = 1;
		for (int j = i + 1; j < num; j++)
		
		{
			if (b[i] == b[j])
			{
				k = 0;
			}
		}
		if (k == 1)
		{
			a[num1] = b[i];
			num1 ++;
		}

	}

	
	for (int i = 0; i < (num1 -1); i++)
	{
		cout << a[i] << " ";
	}
	cout << a[num1 -1];

}
//将关键数从大到小排序
void paixu(int* b, int num)
{
	for (int i = 0; i < num-1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (b[j] < b[j + 1])
			{
				int t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
			}
		}
	}
	/*for (int i = 0; i < (num - 1); i++)
	{
		cout << b[i] << " ";
	}
	cout << b[num - 1] << endl;*/
	deletes(b, num);
	

}
//判断该数是否被覆盖
void panduan(struct arry* pernum_arr ,int n ,int *b)
{
	int num = 0;
	
	
	for (int i = 0; i < n; i++)
	{
		int f = 1;
		for (int k = 0; k < n; k++)
		{
			for (int j = 1; j < pernum_arr[k].cisu; j++)
			{

				if (pernum_arr[k].arr[j] == pernum_arr[i].arr[0])
				{
					f = 0;
				}

			}
		}
		if (f == 1)
		{
			b[num] = pernum_arr[i].arr[0];
			num++;
		}
	}
	paixu(b, num);
	
}

int main()
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	arry pernum_arr[100];
	work(a, n, pernum_arr);
	int b[100];
	panduan(pernum_arr , n , b);


	system("pause");
	return 0;
}
