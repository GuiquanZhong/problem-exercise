#include<iostream>
using namespace std;
int main()
{
	int a_d = 0, b_d = 0, aa = 0, bb = 0;;
	int a, b, n;
	cin >> a >> b >> n;
	int u, v, x, y;
	while (n--)
	{
		cin >> u >> v >> x >> y;

		if (v == u + x && y != v)
		{
			aa++;
		}
		if (y == u + x && v != y)
		{
			bb++;
		}
		if (aa > a)
		{
			cout << "A" << endl;
			cout << bb << endl;
			break;
		}
		if (bb > b)
		{
			cout << "B" << endl;
			cout << aa << endl;
			break;
		}
	}
	return 0;
}