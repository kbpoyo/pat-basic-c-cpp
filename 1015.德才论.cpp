#include<iostream>
#include<string>
using namespace std;
#include<algorithm>

//考生的结构体数组
struct Stu
{
	int Z_num;
	int D_cod;
	int C_cod;
	int Z_cod;
};

//给结构体赋值
void fuzhi(Stu* kao_stu , int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> kao_stu[i].Z_num >> kao_stu[i].D_cod >> kao_stu[i].C_cod;
		kao_stu[i].Z_cod = kao_stu[i].D_cod + kao_stu[i].C_cod;
	}
}


//对考生排序输出
bool cmp(Stu a, Stu b)
{
	if (a.Z_cod == b.Z_cod && a.D_cod == b.D_cod)
	{
		return a.Z_num < b.Z_num;
	}
	else if (a.Z_cod == b.Z_cod)
	{
		return a.D_cod > b.D_cod;
	}
	else
	{
		return a.Z_cod > b.Z_cod;
	}
}

void sort_show(Stu* kao_stu, int n)
{
	
	sort(kao_stu, kao_stu + n, cmp);

	for (int i = 0; i < n; i++)
	{
		cout << kao_stu[i].Z_num << " " << kao_stu[i].D_cod << " " << kao_stu[i].C_cod << endl;
	}
}


//德才全尽
void first(Stu* kao_stu,int  n ,int H ,int L)
{
	Stu* first_stu = new Stu[100010];
	Stu* second_stu = new Stu[100010];
	Stu* third_stu = new Stu[100010];
	Stu* fourth_stu = new Stu[100010];
	int k = 0;
	int f_n = 0;
	int s_n = 0;
	int t_n = 0;
	int fou_n = 0;
	
	
		for (int j = 0; j < n; j++)
		{
			if (kao_stu[j].C_cod >= H && kao_stu[j].D_cod >= H)
			{
				first_stu[f_n] = kao_stu[j];
				
				f_n++;
			
			}
			if (kao_stu[j].D_cod >= H && kao_stu[j].C_cod < H && kao_stu[j].C_cod >= L)
			{
				second_stu[s_n] = kao_stu[j];
				
				s_n++;
				
			}
			if (kao_stu[j].D_cod < H && kao_stu[j].D_cod >= L && kao_stu[j].C_cod < H && kao_stu[j].C_cod >= L && kao_stu[j].D_cod >= kao_stu[j].C_cod)
			{
				third_stu[t_n] = kao_stu[j];
			
				t_n++;
			
			}
			
		    if (kao_stu[j].D_cod < H && kao_stu[j].D_cod >= L && kao_stu[j].C_cod >= L && kao_stu[j].D_cod < kao_stu[j].C_cod)
			{
				fourth_stu[fou_n] = kao_stu[j];
				
				fou_n++;
			
			}
			
		}
	

	sort_show(first_stu, f_n);
	sort_show(second_stu, s_n);
	sort_show(third_stu, t_n);
	sort_show(fourth_stu, fou_n);

}


//录取人数
int Luqu_stu(Stu* kao_stu, int n , int L)
{
	int L_n = 0;
	for (int i = 0; i < n; i++)
	{
		if (kao_stu[i].D_cod >= L && kao_stu[i].C_cod >= L)
		{
			L_n++;
		}
	}
	return L_n;
}


int main()
{
	int  n; //考生人数
	int L;//最低录取分数线
	int H;//优等分数线
	cin >> n >> L >> H;

	//创建考生结构体
	Stu* kao_stu = new Stu[100010];
	
	fuzhi(kao_stu, n);
	int L_n = Luqu_stu(kao_stu, n, L);
	cout << L_n << endl;
	first(kao_stu, n, H, L);
	system("pause");
	return 0;
}
