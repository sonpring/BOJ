#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int korea = 0; int yonsei = 0;
		for (int i = 0; i < 9; i++)
		{
			int a, b;
			cin >> a >> b;
			yonsei += a;
			korea += b;
		}
		if (yonsei > korea)
			cout << "Yonsei" << endl;

		else if (yonsei < korea)
			cout << "Korea" << endl;

		else
			cout << "Draw" << endl;
	}
	return 0;
}