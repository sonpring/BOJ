#include <iostream>

int main()
{
	int num;
	int div = 2;
	std::cin >> num;

	while(num > 0) 
	{
		for (int j = div-1; j > 0; j--)
		{
			num--;
			if (num == 0 && div % 2 == 0)
			{
				std::cout << j << "/" << div - j;
				break;
			}

			else if (num == 0 && div % 2 == 1)
			{
				std::cout << div - j << "/" << j;
				break;
			}
		}
		div++;
	}
	return 0;
}