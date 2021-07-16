#include<iostream>
using namespace std;
#include <string>

//判断一个数的奇偶性,偶数返回1，不为1的奇数返回-1，为1则返回0

int JIOU(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		if (num == 1)
		{
			return 0;
	    }
		else
		{
			return -1;
		}
	}
}
int main()
{
	
	int num, sum = 0;
	cin >> num;
	while (true)
	{
		int is = JIOU(num);
		if (is == 1)
		{
			num = num / 2;
			sum++;
		}
		else
		{
			if (is == 0)
			{
				break;
			}
			else
			{
				num = (3 * num + 1) / 2;

				sum++;
			}
		}
	}
	cout << sum << endl;

	system("pause");
	return 0;
}
