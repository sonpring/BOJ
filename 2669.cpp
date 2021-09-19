#include <iostream>
using namespace std;

int main()
{
	int a[4];
	int b[4];
	int c[4];
	int d[4];
	int s = 0;

	for (int i = 0; i < 4; i++)
		cin >> a[i];

	for (int i = 0; i < 4; i++)
		cin >> b[i];

	for (int i = 0; i < 4; i++)
		cin >> c[i];

	for (int i = 0; i < 4; i++)
		cin >> d[i];

	for (double i = 1.5; i < 101; i++)
	{
		for (double j = 1.5; j < 101; j++)
		{
			if (a[2] > i && a[0] < i)
			{
				if (a[1] < j && a[3] > j)
				{
					s++;
					continue;
				}
			}
			if (b[2] > i && b[0] < i)
			{
				if (b[1] < j && b[3] > j)
				{
					s++;
					continue;
				}
			}

			if (c[2] > i && c[0] < i)
			{
				if (c[1] < j && c[3] >j)
				{
					s++;
					continue;
				}
			}

			if (d[2] > i && d[0] < i)
			{
				if (d[1] < j && d[3] > j)
				{
					s++;
					continue;
				}
			}
		}
	}
	cout << s;
}