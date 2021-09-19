#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c && a == c)
	{
		cout << 10000 + (a * 1000);
	}

	else if (a == b || a == c || b == c)
	{
		if(a == b)
			cout << 1000 + 100 * a;

		else if(b == c)
			cout << 1000 + 100 * b;

		else if ( a == c)
			cout << 1000 + 100 * a;
	}

	else
	{
		int max = 0;
		if (a > b)
		{
			if (a > c)
				max = a;
			else
				max = c;
		}

		else
		{
			if (b > c)
				max = b;
			else
				max = c;
		}

		cout << max * 100;
	}
	return 0;
}