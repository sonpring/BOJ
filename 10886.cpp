#include <iostream>
using namespace std;

int main()
{
	int n;
	int cute = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a == 1)
			cute++;
		else
			cute--;
	}
	if (cute > 0)
		cout << "Junhee is cute!" << endl;
	else
		cout << "Junhee is not cute!" << endl;

	return 0;
}