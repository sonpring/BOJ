#include <iostream>
using namespace std;
#define pi 3.1415926535897932384626433832795028841971

int main()
{
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << (r * r) * pi << endl << ((2*r) *(2* r)) / 2.0;
	return 0;
}