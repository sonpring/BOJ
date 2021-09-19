#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<vector <int>> v(num, vector<int>(4, 1));  // 2차원 벡터 생성. 모두 0으로 초기화 된 상태. 초기화 안하면 [0][0]이 어디인지 모르므로 런타임 에러.

	for (int i = 0; i < num; i++)
	{
		cin >> v[i][0] >> v[i][1];
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (v[i][0] < v[j][0] && v[i][1] < v[j][1])
			{
				v[i][2] ++;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << v[i][2] << " ";
	}
}