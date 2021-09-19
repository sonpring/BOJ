#include <iostream>
using namespace std;

int main()
{
	int n, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int midmax;
		int a, b, c;
		cin >> a >> b >> c;
		
		if (a == b && b == c && a == c)
		{
			midmax = 10000 + a * 1000;
		}

		else if (a == b || b == c || a == c)
		{
			if(a==b)
				midmax = 1000 + a * 100;
			else if (a == c)
				midmax = 1000 + a * 100;
			else if (b == c)
				midmax = 1000 + b * 100;
		}

		else
		{
			if (a > b)
			{
				if (a > c)
					midmax = 100 * a;
				else
					midmax = 100 * c;
			}
			else
			{
				if (b > c)
					midmax = 100 * b;
				else
					midmax = 100 * c;
			}
		}
		if (midmax > max)
			max = midmax;

	}
	cout << max;
	return 0;
}