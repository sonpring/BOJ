#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<vector <int>> v(num, vector<int>(4, 1));  // 2���� ���� ����. ��� 0���� �ʱ�ȭ �� ����. �ʱ�ȭ ���ϸ� [0][0]�� ������� �𸣹Ƿ� ��Ÿ�� ����.

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