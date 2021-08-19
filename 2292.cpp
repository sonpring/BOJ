#include <iostream>

int main()
{
	int num = 0;
	int result = 0;
	std::cin >> num;
	num--;
	while (num > 0)
	{
		num = num - (6 * result);
		if (num > 0)
		{
			result++;
		}
	}
	std::cout << result + 1; 
}