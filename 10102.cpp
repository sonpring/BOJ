#include <iostream>
using namespace std;

int main()
{
	int n;
	char arr[20];
	int acount = 0;
	int bcount = 0;
	cin >> n >> arr;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'A')
			acount++;

		else if (arr[i] == 'B')
			bcount++;
	}
	if (acount > bcount)
		cout << 'A' << endl;

	else if (acount < bcount)
		cout << 'B' << endl;

	else
		cout << "Tie" << endl;

	return 0;
}