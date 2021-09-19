#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int state = 1;
	getline(cin, str);
	int num = str.length();
	for (int i = 0; i < num / 2; i++)
	{
		if (str[i] != str[num -1 - i])
		{
			state = 0;
			break;
		}
	}
	cout << state << endl;
	return 0;
}