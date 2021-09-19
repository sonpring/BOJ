#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int fm = 0; int om = 0; int ts = 0;
	while (n > 0)
	{
		if (n >= 300)
		{
			n -= 300;
			fm++;
		}
		else if (n >= 60)
		{
			n -= 60;
			om++;
		}
		else if (n >= 10)
		{
			n -= 10;
			ts++;
		}
		else
			break;
	}
	if (n != 0)
		cout << -1;

	else
	{
		cout << fm << " " << om << " " << ts;
	}
	return 0;
}