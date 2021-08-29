#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int garo, sero;

	if (w - x > x)
		garo = x;
	else
		garo = w - x;

	if (h - y > y)
		sero = y;
	else
		sero = h - y;

	if (garo > sero)
		cout << sero;
	else
		cout << garo;

	return 0;
}