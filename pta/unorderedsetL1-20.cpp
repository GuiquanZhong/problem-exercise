#include<iostream>
using namespace std;
#include<set>
#include<iomanip>

int main()
{
	int n;
	cin >> n;
	int k, id, m;
	int num = 0;
	set<int>s, s1;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k >= 2)
		{
			for (int j = 0; j < k; j++)
			{
				cin >> id;
				s.insert(id);
			}
		}
		else
		{
			cin >> id;
		}
	}
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> id;
		if (s.find(id) == s.end() && s1.find(id) == s1.end())
		{
			if (num != 0)cout << " ";
			s1.insert(id);
			cout << setw(5) << setfill('0') << id;
			num++;
		}
	}

	if (num == 0)
		cout << "No one is handsome";
	return 0;
}