#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double h, w;
	while (n--)
	{
		cin >> h >> w;
		double ws = (h - 100) * 0.9 * 2;
		double wss = w - ws, wan = ws * 0.1;
		if (wss < 0)
		{
			wss = -wss;
		}
		if (wss < wan)
			cout << "You are wan mei!" << endl;
		else if (wss >=wan && ws >= w)
			cout << "You are tai shou le!" << endl;
		else if (wss >= wan && ws < w)
			cout << "You are tai pang le!" << endl;
	}
	return 0;
}