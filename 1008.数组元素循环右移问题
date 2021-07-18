#include<iostream>
#include<string>
using namespace std;

//求右移排除周期整倍数后还移了几个位置
int true_weiyi(int a_size, int m)
{
	int X;//真实的移动次数
	if (m >= a_size)
	{
		X = m % a_size;
		return X;
	}
	else
	{
		X = m;
		return X;
	}
}
//输出右移后的数组
void newarry(int  *a, int a_size, int m)
{
int x = true_weiyi(a_size, m);
for (int i = 0; i < m; i++)
{
	int t = a[a_size-1];
for (int j = a_size - 1 ; j > 0; j--)
{

	a[j] = a[j - 1];

}
a[0] = t;
}
for (int i = 0; i < a_size-1; i++)
{
	cout << a[i] << " ";
}
cout << a[a_size - 1];
	

}
int main()
{
	int a_size;
	int m;
	cin >> a_size>>m;
	
	int a[100];
	for (int i = 0; i < a_size; i++)
	{
		cin >> a[i];
	}
	
	newarry( a,  a_size, m);
	system("pause");
	return 0;
}
