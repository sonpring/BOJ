#include <iostream>
using namespace std;

int main()
{
	int* arr = new int[10000];
	for (int i = 0; i < 10000; i++)
	{
		arr[i] = i;
	}
	arr[1] = 0;
	for (int i = 2; i < 100; i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		for (int j = i * i; j < 10000; j += i)
		{
			arr[j] = 0;
		}
	}

	int count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		cin >> n;

		for (int i = n / 2; i > 1; i--)
		{
			if (arr[i] != 0)
			{
				if (arr[n - i] != 0)
				{
					cout << i << " " << n - i << endl;
					break;
				}
			}
		}
	}
	return 0;
}