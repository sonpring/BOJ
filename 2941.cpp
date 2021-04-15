#include <iostream>

int main()
{
	int sum = 0;
	std::string s;	
	std::cin >> s;

	for (int i = 0; i < 2; i++)
	{
		if (int(s[i]) >= 97 && int(s[i]) <= 122)
		{
			sum++;
		}
	}

	if (s[0] == 'l' && s[1] == 'j')
	{
		sum--;
	}

	if (s[0] == 'n' && s[1] == 'j')
	{
		sum--;
	}

	for (int i = 2; i < s.length(); i++)
	{
		if (int(s[i]) >= 97 && int(s[i]) <= 122)
		{
			sum++;
		}

		if (s[i-1] == 'l' && s[i] == 'j')
		{
			sum--;
		}

		 if (s[i-1] == 'n' && s[i] == 'j')
		{
			sum--;
		}

		 if (s[i-2] == 'd' && s[i - 1] == 'z' && s[i] == '=')
		{
			sum--;
		}
	}
	std::cout << sum;
	return 0;
}