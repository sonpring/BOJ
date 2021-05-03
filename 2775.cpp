#include <iostream>

int main()
{
	int arr[15][15] = { 1 };

	for (int i = 0; i < 15; i++)
	{
		arr[0][i] = i + 1;
	}

	for (int i = 0; i < 15; i++)
	{
		arr[i][0] = 1;
	}

	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}

	int num;
	int k, n;
	std::cin >> num;

	for (int a = 0; a< num; a++)
	{
		std::cin >> k;
		std::cin >> n;
		std::cout << arr[k][n - 1] << std::endl;
	}
	return 0;
}