#include <iostream>

int main()
{
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		int a, b;
		int min = 1;
		int cnt = 0;
		std::cin >> a >> b;
		while (b > a)
		{
			b -= min;
			cnt++;
			if (a >= b)
			{
				break;
			}
			b -= min;
			cnt++;
			min++;
		}
		std::cout << cnt << std::endl;
	}
}