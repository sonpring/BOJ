#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int count = 0;
	int min = 0;
	for (int i = num-1; i > 0; i--)
	{
		count += i;
		for (int j = i; j > 0;)
		{
			count += (j % 10);
			j = j / 10;
		}

		if (num == count)
		{
			min = i;
		}
		count = 0;
	}
	cout << min;
	return 0;
}