#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a + c < b)
			cout << "advertise" << endl;
		else if (a + c == b)
			cout << "does not matter" << endl;
		else if (a + c > b)
			cout << "do not advertise" << endl;
	}
	return 0;
}