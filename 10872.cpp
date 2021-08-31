#include <iostream>
using namespace std;

int factorial(int num)
{
	if (num >= 2)
		return factorial(num - 1) * num;
	else
		return 1;
}

int main()
{
	int n;
	cin >> n;
	cout << factorial(n);
}