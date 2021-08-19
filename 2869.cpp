#include <iostream>
#include <cmath>

int main()
{
	double a, b, v;
	std::cin >> a >> b >> v;
	std::cout << int(ceil((v - a) / (a - b)) + 1);
	return 0;
}