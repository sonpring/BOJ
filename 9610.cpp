#include <iostream>
using namespace std;

int main()
{
	int n;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, ax = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		if (a == 0 || b == 0)
			ax++;

		else if (a > 0 && b > 0)
			q1++;

		else if (a < 0 && b>0)
			q2++;

		else if (a < 0 && b < 0)
			q3++;

		else if (a > 0 && b < 0)
			q4++;
	}
	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << ax << endl;
}