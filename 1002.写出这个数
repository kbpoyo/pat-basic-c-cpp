#include<iostream>
using namespace std;
#include<string>
#include<math.h>

//求各位数字之和
int sumper(char *p )
{
int sum = 0;
	while (*p != 0)
	  {
		        sum += (int)*p -(int) '0';
		       
		        p++;
       }
	
	return sum;
}
//求该和有几位数
int I( int sum)
{
	int i = 0;
	while (true)
	{
		
		sum = sum/ 10;
		i++;
		if (sum == 0)
		{
			break;
		}

	}
	return i;
}

//储存各位数对应的拼音
void pinyin(int pernum)
{
	string pinyin[10] = { "ling" , "yi" , "er" ,"san" , "si" , "wu" , "liu" , "qi" ,"ba" , "jiu"};
	cout << pinyin[pernum];
}
//输出各位数字的拼音
void pringtfpinyin(int sum)
{
	int pernum;
	
int i = I(sum);
	if (i == 1)
	{
		pernum = sum;
		pinyin(pernum);
	}
	if (i == 2)
	{
		pernum = sum / 10;
		pinyin(pernum);
		cout << " ";
		pernum = sum % 10;
		pinyin(pernum);
	}
	if (i == 3)
	{
		pernum = sum / 100;
		pinyin(pernum);
		cout << " ";
		pernum = (sum / 10) % 10;
		pinyin(pernum);
		cout << " ";
		pernum = sum % 10;
		pinyin(pernum);

	}
}
int main()

{
	char  num[101];
	cin >> num;
	int sum = sumper(num);
	pringtfpinyin(sum);

	
	system("pause");
	return 0;

}
