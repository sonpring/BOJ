#include <iostream>
using namespace std;

int main()
{
	int n, num;
	int max = 0;
	cin >> n >> num;
	int* arr = new int[n+1];
	for (int i = 1; i < n+1; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < n-1; i++)
	{
		for (int j = n-1; j > i; j--)
		{
			for (int k = n; k > j; k--)
			{
				//cout << arr[i] + arr[j] + arr[k] << endl;
				if (arr[i] + arr[j] + arr[k] <= num)
				{
					if (arr[i] + arr[j] + arr[k] > max)
					{
						max = arr[i] + arr[j] + arr[k];
					}
				}
			}
		}
	}
	cout << max;
	delete[] arr;
	return 0;
}