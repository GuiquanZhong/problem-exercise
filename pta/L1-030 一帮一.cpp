#include<iostream>
#include<string>
using namespace std;
struct student
{
	string sex;
	string name;
	bool flag = true;
};
int main()
{
	int n;
	cin >> n;
	student* s1 = new student[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s1[i].sex;
		cin >> s1[i].name;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			if (s1[i].sex != s1[j].sex && s1[j].flag == true)
			{
				cout << s1[i].name << " " << s1[j].name << endl;
				s1[j].flag = false;
				break;
			}
		}
	}
	return 0;

}