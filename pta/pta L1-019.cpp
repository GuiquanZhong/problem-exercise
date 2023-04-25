#include<iostream>
using namespace std;



int main()
{
	int a_d = 0, b_d = 0;
	int a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	int aa = 0, bb = 0;
	int u,v, x, y;
	while (n--)
	{
		cin >> u >> v >> x >> y;
		if (((v == u + x) && (y = u + x))||((v!=u+x)&&(y!=u+x)))
		{
			continue;
		}
		if (v == u + x)
		{
			aa++;
			a_d++;
		}
		if (y == u + x)
		{
			bb++;
			b_d++;
		}
		if (aa > a)
		{
			cout << "B" << endl;
			cout << b_d << endl;
			break;
		}
		if (bb > b)
		{
			cout << "A" << endl;
			cout<<a_d<<endl;
			break;
		}

	}

	system("pause");
	return 0;
}