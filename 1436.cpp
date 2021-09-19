#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int > v;

	for (int i = 1; i < 3000000; i++)
	{
		int a = i;
		while (a > 0)
		{
			if(a%10 == 6)
				if((a/10)%10 == 6)
					if ((a/100) % 10 == 6)
					{
						v.push_back(i);
						break;
					}
			a = a / 10;
		}
	}
	cout << v[n - 1];
}