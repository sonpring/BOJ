#include <iostream>

int main()
{
	int num;
	int H, W, N;
	int room = 1;
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		std::cin >> H >> W >> N;
		while (N > H)
		{
			N = N - H;
			room++;
		}
		std::cout << N * 100 + room << std::endl;
		room = 1;
	}
	return 0;
}