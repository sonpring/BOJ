#include <iostream>
using namespace std;

int main()
{
	int a1, a2, b1, b2, c1, c2;
	int d1 = 0, d2 = 0; // 출력 정답 x y 좌표

	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

	if (a1 == b1)
	{
		d1 = c1;
	}

	if (a1 == c1)
	{
		d1 = b1;
	}

	if ( b1 == c1)
	{
		d1 = a1;
	}

	if (a2 == b2)
	{
		d2 = c2;
	}

	if (a2 == c2)
	{
		d2 = b2;
	}

	if (b2 == c2)
	{
		d2 = a2;
	}

	cout << d1 <<" " << d2;
}