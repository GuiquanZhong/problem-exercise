#include<iostream>
using namespace std;
#include<string>


int main()
{
	string a;
	getline(cin, a);
	int x = 0, y = 0;
	int m = 0, n = 0;
	int i = 0;
	for (i; i < a.size(); i++)
	{
		if (a[i] == ' ')break;
		m = m * 10 + a[i] - '0';
		if (a[i] >= '0' && a[i] <= '9')
		{
			x = x * 10 + (a[i] - '0');
		}
	}
	for (int j=i+1; j < a.size(); j++)
	{
		n = n * 10 + a[j] - '0';
		if (a[j] >= '0' && a[j] <= '9')
		{
			y = y * 10 + (a[j] - '0');
		}
	}
	if (m <= 1000 && m >= 1 && m == x)
	{
		cout << m;
	}
	else
	{
		cout << '?';
	}
	cout << " + ";
	if (n <= 1000 && n >= 1 && n == y)
	{
		cout << n;
	}
	else
	{
		cout << '?';
	}
	cout << " = ";
	if (m <= 1000 && m >= 1 && m == x && n <= 1000 && n >= 1 && n == y)
	{
		cout << m + n;
	}
	else
	{
		cout << "?";
	}
	return 0;

}