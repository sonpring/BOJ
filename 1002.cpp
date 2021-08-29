#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double n, x1, x2, y1, y2, r1, r2;
	double dis;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dis = (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

		if (x1 == x2 && y1 == y2 && r1 == r2)
			cout << -1 << endl;

		else if ((r1 + r2)*(r1+r2) == dis)
			cout << 1 << endl;

		else if ((r1 + r2)*(r1+r2) < dis)
			cout << 0 << endl;

		else if((r1+r2)*(r1+r2) > dis)
		{
			if ((r1 - r2)*(r1-r2) > dis)
				cout << 0 << endl;

			else if ((r1 - r2) * (r1 - r2) == dis)
				cout << 1 << endl;

			else if ((r1 - r2) * (r1 - r2) < dis )
				cout << 2 << endl;
		}
	}
	return 0;
}