#include<iostream>
using namespace std;
#include<string>

//创建学生结构体
struct student
{
	string name;
	string num;
	int score;
};
//给每个结构体赋值
void fuzhi(struct student* stu)
{
	char name[10];
	cin >> name;
	stu->name = name;
	char num[10];
	cin >> num;
	stu->num = num;
	int score;
	cin >> score;
	stu->score = score;
};
//按分数排序
void paixu(struct student* stu, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (stu[j].score > stu[j + 1].score)
			{
				student  t = stu[j];
				stu[j] = stu[j+ 1];
				stu[j + 1] = t;
			}
		}
		
	}
	cout << stu[n - 1].name << " " << stu[n - 1].num << endl;
	cout << stu[0].name << " " << stu[0].num << endl;
}
	int main()
	{
		
		int n;
		cin >> n;
		//声明结构体数组
		student stu[1000];
		for (int i = 0; i < n; i++)
		{
			fuzhi(&stu[i]);
		}
		paixu(stu, n);


		system("pause");
		return 0;
	}
	
