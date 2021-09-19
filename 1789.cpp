#include <iostream>
using namespace std;

int main()
{
	long long int s;
	int count = 0;
	cin >> s;
	for (int i = 1; i <= s; i++)
	{
		count++;
		s -= i;
	}
	cout << count;
	return 0;
}