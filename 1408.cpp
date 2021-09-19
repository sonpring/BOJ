#include <iostream>
using namespace std;

int main()
{
	char a[10];
	char b[10];
	cin >> a >> b;

	int atime = 0;
	int btime = 0;
	int time = 0;

	atime = ((a[0] - '0') * 10 + (a[1] - '0')) * 3600 + ((a[3] - '0') * 10 + (a[4] - '0')) * 60 + ((a[6] - '0') * 10 + (a[7] - '0'));
	btime = ((b[0] - '0') * 10 + (b[1] - '0')) * 3600 + ((b[3] - '0') * 10 + (b[4] - '0')) * 60 + ((b[6] - '0') * 10 + (b[7] - '0'));
	time = btime - atime;
	if (time < 0)
	{
		time += 24 * 3600;
	}

	if (time / 3600 < 10)
		cout << '0';
	cout << time / 3600 << ":";

	if ((time - (time / 3600) * 3600) / 60 < 10)
		cout << '0';
	cout << (time - (time / 3600) * 3600) / 60 << ":";

	if (time % 60 < 10)
		cout << '0';
	cout << time % 60;

	return 0;
}