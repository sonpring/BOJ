#include <iostream>
using namespace std;

int main()
{
	int hour, min, sec, oven, cal;
	cin >> hour >> min >> sec >> oven;
	cal = (hour * 3600) +(min * 60) + sec + oven;

	if (cal >= 86400)
	{
		while (cal >= 86400)
			cal -= 86400;
		cout << cal / 3600 << " " << (cal-((cal/3600)*3600)) / 60 << " " << cal % 60;
	}
	else
		cout << cal / 3600 << " " << (cal - ((cal / 3600) * 3600)) / 60 << " "<< cal % 60;
	return 0;
}