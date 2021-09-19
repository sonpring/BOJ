#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int garo, sero;
	int count1 = 0; int count2 = 0;
	int min = 64;
	cin >> sero >> garo;
	char black[65] = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
	char white[65] = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";

	vector<vector <char>> v(sero, vector <char>(garo, 0));
	for (int i = 0; i < sero; i++)
	{
		for (int j = 0; j < garo; j++)
		{
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < sero - 7; i++)
	{
		for (int j = 0; j < garo - 7; j++)
		{
			int num = 0;
			for (int a = 0; a < 8; a++)
			{
				for (int b = 0; b < 8; b++)
				{
					if (v[i + a][j + b] != black[num])
					{
						count1++;
					}

					if (v[i + a][j + b] != white[num])
					{
						count2++;
					}
					num++;
				}
			}

			if (count1 <= count2 && count1 < min)
			{
				min = count1;
			}

			else if (count1 >= count2 && count2 < min)
			{
				min = count2;
			}
			count1 = 0;
			count2 = 0;
		}
	}
	cout << min;
}