#include <iostream>
#include <string>
using namespace std;

int main()
{
	char plate[100];
	int height = 10;
	cin.getline(plate, 50);
	for(int i = 1; plate[i] != '\0'; i++)
	{
		if(plate[i-1] != plate[i])
		{ 
			height += 10;
		}
		else if (plate[i - 1] == plate[i])
		{
			height += 5;
		}
	}
	cout << height;
	return 0;
}