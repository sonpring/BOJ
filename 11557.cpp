#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int s;
		cin >> s;
		string maxcol;
		int maxl = 0;
		for (int j = 0; j < s; j++)
		{
			string col;  int l;
			cin >> col >> l;
			if (l > maxl)
			{
				maxcol = col;
				maxl = l;
			}
		}
		cout << maxcol << endl;
	}
	return 0;
}