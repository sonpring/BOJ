#include <iostream>
using namespace std;

int main()
{
	int hour, min, oven, cal;
	cin >> hour >> min >> oven;
	cal = hour * 60 + min + oven;
	if (cal >= 1440)
	{
		cal -= 1440;
		cout << cal / 60 << " " << cal % 60;
	}
	else
		cout << cal / 60 << " " << cal % 60;
	return 0;
}