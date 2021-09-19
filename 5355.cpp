#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double num;
		char mars[7] = {};
		cin >> num;
		cin.getline(mars, 7);
		for (int i = 0; i < 7; i++)
		{
			if (mars[i] == '@')
			{
				num *= 3;
			}

			else if (mars[i] == '%')
			{
				num += 5;
			}

			else if (mars[i] == '#')
			{
				num -= 7;
			}
		}
		cout<<fixed;
		cout.precision(2);
		cout << num << endl;
	}
	return 0;
}