#include<iostream>
#include<string>
using namespace std;






	int main()
	{
	
	int n;
	cin >> n;
	int school_score[100010] = { 0 };
	int schid;
	int score;

	
	
	for (int i = 0; i < n; i++)
	{
		cin >> schid >> score;
		school_score[schid] += score;
	}
	int max = -1; 
	int k = 1;
	for (int i = 1; i < n+1; i++)
	{
		if (school_score[i] > max)
		{
			 max = school_score[i];
			 k = i;

		}
	}
	cout << k << " " << max;


	system("pause");
	return 0;
}
