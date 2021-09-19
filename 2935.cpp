#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string a;
	string b;
	char oper;
	cin >> a >> oper >> b;
	if (oper == '*')
	{
		int count1;
		count1 = (a.length()-1)+(b.length()-1);
		cout << '1';
		for (int i = 0; i < count1; i++)
		{
			cout << '0';
		}
	}

	else if (oper == '+')
	{
		int count2;
		count2 = a.length() - b.length();
		if (count2 < 0)
			count2 *= -1;
		if (a.length() > b.length())
		{
			a[count2] = '1';
			for (int i = 0; i < a.length(); i++)
			{
				cout << a[i];
			}
		}
		else if (a.length() < b.length())
		{
			b[count2] = '1';
			for (int i = 0; i < b.length(); i++)
			{
				cout << b[i];
			}
		}
		else if (a.length() == b.length())
		{
			a[0] = '2';
			for (int i = 0; i < a.length(); i++)
			{
				cout << a[i];
			}
		}
	}

	return 0;
}