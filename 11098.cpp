#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int p;
		int maxv = 0;
		string maxp;
		cin >> p;
		for (int j = 0; j < p; j++)
		{
			int value;
			string player;
			cin >> value >> player;
			if (value > maxv)
			{
				maxv = value;
				maxp = player;
			}
		}
		cout << maxp << endl;
	}
	return 0;
}