#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n == -1)
			break;
		else
		{
			int sum = 0;
			vector <int> arr;
			for (int i = 1; i < n; i++)
			{
				if (n % i == 0)
				{
					sum += i;
					arr.push_back(i);
				}
			}
			if (sum == n)
			{
				cout << n << " = ";
				for (int i = 0; i<(arr.size()-(unsigned)1); i++)
				{
					cout << arr[i] << " + ";
				}
				cout << arr.back() << endl;
			}
			else
			{
				cout << n << " is NOT perfect." << endl;
			}
		}
	}
}