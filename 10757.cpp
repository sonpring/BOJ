#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;  // 정수를 스트링 형태로 받음
	int max = 0;
	int carry = 0;
	cin >> a >> b;

	if (a.size() > b.size())
	{
		string c;
		max = a.size();
		for (int i = 0; i < max - b.size(); i++)
		{
			c += '0';
		}
		b = c + b;
	}

	else
	{
		string c;
		max = b.size();
		for (int i = 0; i < max - a.size(); i++)
		{
			c += '0';
		}
		a = c + a;
	}

	for (int i = 0; i < max; i++)
	{
		a[max - 1 - i] = a[max - 1 - i] + b[max - 1 - i] - '0' + carry;
		if (int(a[max - 1 - i] - '0') >= 10)
		{
			a[max - 1 - i] -= 10;
			carry = 1;
		}
		else
		{
			carry = 0;
		}
	}

	if (carry == 1)
	{
		a = '1' + a;
	}
	cout << a;
	return 0;
}