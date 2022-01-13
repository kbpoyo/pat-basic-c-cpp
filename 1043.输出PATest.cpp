#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[10010];
	int a[128] = { 0 };
	cin >> s;
	for (int i = 0; i < strlen(s) ; i++)
	{
		
		a[s[i]]++;
	}
	for (int i = a['P'] + a['A'] + a['T'] + a['e'] + a['s'] + a['t']; i > 0; )
	{
		if (a['P'] != 0)
		{
			cout << 'P';
			a['P']--;
            i--;
			
		}
		if (a['A'] != 0)
		{
			cout << 'A';
			a['A']--;
            i--;
		}

		if (a['T'] != 0)
		{
			cout << 'T';
			a['T']--;
            i--;

		}
		if (a['e'] != 0)
		{
			cout << 'e';
			a['e']--;
            i--;

		}
		if (a['s'] != 0)
		{
			cout << 's';
			a['s']--;
            i--;

		}
		if (a['t'] != 0)
		{
			cout << 't';
			a['t']--;
            i--;

		}

	}
    return 0;
    }
