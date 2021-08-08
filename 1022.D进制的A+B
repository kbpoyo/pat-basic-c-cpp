#include<iostream>
#include<string>
using namespace std;

int main()
{
	int A, B, D;
	int num;
	cin >> A >> B >> D;
	int C = A + B;

	int a[100] = { 0 };

	for (int i = 0; ; i++)
	{
		a[i] = C % D;
		C = C / D;
		if (C == 0)
		{
			 num = i;
			break;
		}
	}
	for (int i = num; i >= 0; i--)
	{
		cout << a[i];
	}


	system("pause");
	return 0;
}
