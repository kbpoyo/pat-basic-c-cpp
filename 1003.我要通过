#include <iostream>
using namespace std;
#include<string>
#include<cstring>

string panduan( char* pat)

{
	int count_A = 0;
	int count_P = 0;
	int count_T = 0;
	//求字符串长度
	int len = strlen(pat);
	/*int k;

	for (int i = 0; i < 100; i++)
	{
		if ((int)pat[i] > 0)
		{
			
		}
	}*/

	if (len < 3)
	{
		return "NO";
	}
	else
	{
		//计算A P T 所占个数
		for (int i = 0; i < len; i++)
		{
			if (pat[i] == 'A')
			{
				count_A++;
			}
			else if (pat[i] == 'P')
			{
				count_P++;
			}
			else if (pat[i] == 'T')
			{
				count_T++;
			}
			else
			{
				return "NO";
			}

		}
		//判断条件1是否满足
		if (count_P == 1 && count_T == 1 && count_A)
		{
			//判断 T 右边 A 的数量是否等于 P T 中间 A 的数量与 P 左边 A 的数量的乘机
			for (int i = 0; i < len; i++)
			{
				if (pat[i] == 'P')
				{
					int A_count_L = i;
					for (int j = i + 1; j < len; j++)
					{
						if (pat[j] == 'A')
						{
							for (int k = j + 1; k < len; k++)
							{
								if (pat[k] == 'T')
								{
									int A_count_M = k - i - 1;
									int A_count_R = len - k - 1;

									if (A_count_R == A_count_M * A_count_L)
									{
										return "YES";
									}

								}
							}

						}

					}

				}

			}


		}
		return "NO";




	}




}
//保留单次判断结果
void keep(char* pat, int cisu)
{
	string ret[100];
	for (int i = 0; i < cisu; i++)
	{

		cin >> pat;

		ret[i] = panduan(pat);

	}
	for (int i = 0; i < cisu - 1; i++)
	{
		cout << ret[i] << endl;
	}
	cout << ret[cisu - 1];




}
int main()
{
	char pat[100];
	int cisu;
	cin >> cisu;
	keep(pat, cisu);




	system("pause");
	return 0;
}
