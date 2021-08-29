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
		// primeNum[i] �� 0�̸� �̹� �Ҽ��� �ƴϹǷ� continue
		if (arr[i] == 0)
			continue;
		// i*k (k<i) ������ ���� �̹� �˻������Ƿ� j�� i*i ���� �˻����ش�.
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
