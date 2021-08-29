#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int num = 123456 * 2 + 1;
	int* arr = new int[num];
	arr[1] = 0;
	arr[0] = 0;
	for (int i = 2; i < 123456 * 2 + 1; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(num); i++)
	{
		// primeNum[i] 가 0이면 이미 소수가 아니므로 continue
		if (arr[i] == 0)
			continue;
		// i*k (k<i) 까지의 수는 이미 검사했으므로 j는 i*i 부터 검사해준다.
		for (int j = i * i; j <= num; j += i)
			arr[j] = 0;
	}

	while (1)
	{
		int n = 0;
		int count = 0;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (arr[i] != 0)
				count++;
		}
		cout << count << endl;
	}
	delete[] arr;
	return 0;
}
