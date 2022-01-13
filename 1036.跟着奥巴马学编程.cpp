#include<iostream>
#include<string>
using namespace std;

class cube
{
public:
	 cube()
	{
		 cin >> L >> C;
	}
	 int jiou()
	 {
		 if (this->L / 2 == 0)
		 {
			 return this->L / 2;
		 }
		 else
		 {
			 return (this->L + 1) / 2;
		 }
	 }
	  ~cube()
	 {
		 int a = this->jiou();
		
			 for (int i = 0; i < this->L; i++)
			 {
				 cout << this->C ;
			 }
			 cout << endl;

			 for (int i = 0; i < a - 2; i++)
			 {
				 cout << this->C;
				 for (int j = 0; j < (this->L - 2); j++)
				 {
					 cout << " ";
				 }
				 cout << this->C;
				 cout << endl;
			 }
			 for (int i = 0; i < this->L; i++)
			 {
				 cout << this->C;
			 }
		 
	 }
public:
	char C;
	int L;
};
void test()
{
	cube a1;
}
int main ()
{
	test();
	

	system("pause");
	return 0;
}
