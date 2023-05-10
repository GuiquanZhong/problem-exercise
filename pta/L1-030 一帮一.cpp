
//网上题解
//#include<iostream>
//#include<string>
//using namespace std;
//struct student
//{
//	string sex;
//	string name;
//	bool flag = true;
//};
//int main()
//{
//	int n;
//	cin >> n;
//	student* s1 = new student[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s1[i].sex;
//		cin >> s1[i].name;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = n; j > i; j--)
//		{
//			if (s1[i].sex != s1[j].sex && s1[j].flag == true)
//			{
//				cout << s1[i].name << " " << s1[j].name << endl;
//				s1[j].flag = false;
//				break;
//			}
//		}
//	}
//	return 0;
//
//}
//

//自我题解 不用结构体，new三个数组
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string* sex = new string[n];
	string* name = new string[n];
	bool* bo = new bool[n];
	for (int i = 0; i < n; i++)
	{
		cin >> sex[i] >> name[i];
		bo[i] = true;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			if (sex[i] != sex[j] && bo[j] == true)
			{
				cout << name[i] << " " << name[j] << endl;
				bo[j] = false;
				break;
			}
		}
	}
	return 0;
}