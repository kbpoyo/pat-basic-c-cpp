#include<iostream>
#include<string>
using namespace std;
//个数对应的输出
void cout_g(int num_g)
{
	for (int i = 1; i < num_g + 1; i++)
	{
		cout << i;
	}
}
//十位数对应的输出
void cout_s(int num_s)
{
	for (int i = 0; i < num_s; i++)
	{
		cout << "S";
	}
}
//百位数对应的输出
void cout_b(int num_b)
{
	for (int i = 0; i < num_b; i++)
	{
		cout << "B";
	}
}
//等到该数的每一位数
void pernum(string& num)
{
	int i = 0;
	
	while (true)
	{
		if ((int)num[i] == 0 )
		{
			break;
		}
		i++;
	}
	
	if (i == 1)
	{
		int num_g = (int)num[0] - (int)'0';
		cout_g(num_g);
	}
	else if (i == 2)
	{
		int num_s = (int)num[0] - (int)'0';
		int num_g = (int)num[1] - (int)'0';
		cout_s(num_s);
		cout_g(num_g);
	}
	else if (i == 3)
	{
		int num_b = (int)num[0] - (int)'0';
		int num_s = (int)num[1] - (int)'0';
		int num_g = (int)num[2] - (int)'0';
		
		cout_b(num_b);
		cout_s(num_s);
		cout_g(num_g);
 	}
}
int main()
{
	string num;
	cin >> num;
	pernum(num);

	system("pause");
	return 0;
}
