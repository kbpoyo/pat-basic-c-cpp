#include<iostream>
#include<string>
#include<math.h>
using namespace std;

//判断一个数是不是素数 是素数就返回1 不是就返回 0
int panduan(int num)
{
	
	for (int i = 2; i <=sqrt(num) ; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
		
	}
	return 1; 
}

//找素数对
void work(int num)
{
	int duishu = 0;
	for (int i = 2; i < num - 1; i++)
	{
		if (panduan(i))
		{
			if (panduan(i + 2))
			{
				duishu++;
			}
		}
	}
	cout <<duishu<< endl;
}
int main()

{
	int num;
	cin >> num;
	work(num);
	system("pause");
	return 0;
}
