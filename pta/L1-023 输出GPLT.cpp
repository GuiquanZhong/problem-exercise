#include<iostream>
using namespace std;
#include<string>
int main()
{
	string a;
	cin >> a;
	int w = 0, x = 0, y = 0, z = 0;
	string* G = new string[a.size()];
	string* P = new string[a.size()];
	string* L = new string[a.size()];
	string* T = new string[a.size()];
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == 'g' || a[i] == 'G')
		{
			G[w] = 'G';
			w++;
		}
		else if (a[i] == 'p' || a[i] == 'P')
		{
			P[x] = 'P';
			x++;
		}
		else if (a[i] == 'l' || a[i] == 'L')
		{
			L[y] = 'L';
			y++;
		}
		else if (a[i] == 't' || a[i] == 'T')
		{
			T[z] = 'T';
			z++;
		}
	}
	for (int i = 0; i < a.size(); i++)
	{
		cout << G[i] << P[i] << L[i] << T[i];
	}
	return 0;
}

//´óÀÐ½â·¨
//#include<iostream>
//using namespace std;
//#include<string>
//int main()
//{
//	string a;
//	cin >> a;
//	int w = 0, x = 0, y = 0, z = 0;
//
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] == 'g' || a[i] == 'G')
//		{
//			w++;
//		}
//		else if (a[i] == 'p' || a[i] == 'P')
//		{
//			x++;
//		}
//		else if (a[i] == 'l' || a[i] == 'L')
//		{
//			y++;
//		}
//		else if (a[i] == 't' || a[i] == 'T')
//		{
//			z++;
//		}
//	}
//	while (w > 0 || x > 0 || y > 0 || z > 0)
//	{
//		if (w > 0)
//		{
//			cout << "G";
//			w--;
//		}
//		if (x > 0)
//		{
//			cout << "P";
//			x--;
//		}
//		if (y > 0)
//		{
//			cout << "L";
//			y--;
//		}
//		if (z > 0)
//		{
//			cout << "T";
//			z--;
//		}
//	}
//	return 0;
//}