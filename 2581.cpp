#include <iostream>
using namespace std;

int sosu(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return n;
}
int main()
{
	int a, b;
	int sum = 0;
	int min = 0;
	cin >> a >> b;
	for (int i = 0; i <= b - a; i++)
	{
		if (sosu(a + i) == a + i)
		{
			sum += a + i;
			if (sum == a + i)
			{
				min = a + i;
			}
		}
	}
	if (sum == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << sum << endl << min;
	}
}