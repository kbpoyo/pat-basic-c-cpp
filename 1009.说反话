#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	char str[81] = { ' ' };
	
	cin.getline(str , sizeof(str));
	
	int k = 0;
	
	for (int i = strlen(str); i >= 0; i--)
	{
		if ((int)str[i] != 0 && (int)str[i] != (int) ' ')
		{
			 k = i;
			for ( i ; i >0 ; i--)
			{
				if ((int)str[i] == (int) ' ')
				{
					for (int f = i + 1; f <= k; f++)
					{
						cout << str[f];
					}
					cout << ' ';
					break;
				}
			}
		}
	}
	for (int i = 0; i <= k; i++)
	{
		cout << str[i];
	}
	
	
	system("pause");
	return 0;
}
