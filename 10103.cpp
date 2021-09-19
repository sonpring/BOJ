#include <iostream>
using namespace std;

int main()
{
	int n;
	int cscore = 100;
	int sscore = 100;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
			sscore -= a;
		else if (a < b)
			cscore -= b;
	}
	cout << cscore << endl << sscore;
	return 0;
}