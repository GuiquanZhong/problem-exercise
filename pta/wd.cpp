#include<iostream>
using namespace std;
#include<string>
int main()
{
	int m, n;
	char a;
	cin >> m >> a >> n;
	if ((m > 0 && m < 12) || m > 24)
	{
		if (m >= 10 && n >= 10)
		{
			cout << "Only " << m << a << n << ".  Too early to Dang." << endl;
		}
		else if (m < 10 && n >= 10)
		{
			cout << "Only 0" << m << a << n << ".  Too early to Dang." << endl;
		}
		else if (m < 10 && n < 10)//nihao
		{
			cout << "Only 0" << m << a << "0" << n << ".  Too early to Dang." << endl;
		}
	}
	else if ((m >= 12 && m <= 24) || (m == 0 && n == 0))
	{
		if (n == 0)
		{
			for (int i = 0; i < m - 12; i++)
			{
				cout << "Dang";
			}
		}
		else
		{
			for (int i = 0; i < m + 1 - 12; i++)
			{
				cout << "Dang";
			}
		}
	}
	system("pause");
	return 0;
}