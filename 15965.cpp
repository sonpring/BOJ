#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int *arr = new int[7400000];
	for (int i = 0; i < 7400000; i++)
	{
		arr[i] = i;
	}
	arr[1] = 0;
	for (int i = 2; i < sqrt(7400000); i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		for (int j = i * i; j < 7400000; j += i)
		{
			arr[j] = 0;
		}
	}
	int n;
	int cnt = 0;
	cin >> n;

	for (int i = 0; i < 7400000; i++)
	{
		if (arr[i] != 0)
		{
			cnt++;
		}
		if (cnt == n)
		{
			cout << i;
			break;
		}
	}
	delete[]arr;
	return 0;
}