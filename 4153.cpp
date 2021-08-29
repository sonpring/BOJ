#include <iostream>
using namespace std;

int main()
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 || b == 0 || c == 0)
		{
			break;
		}
		else if (a * a + b * b == c * c)
		{
			cout << "right" << endl;
		}
		else if (b * b + c * c == a * a)
		{
			cout << "right" << endl;
		}
		else if (c * c + a * a == b * b)
		{
			cout << "right" << endl;
		}
		else
			cout << "wrong" << endl;
	}
	return 0;
}