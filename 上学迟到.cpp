#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double s, v;
	cin >> s >> v;
	int time_spent = ceil(s / v);
	int minutes = 470 + 24 * 60 - time_spent;
	if (minutes > 24 * 60)
		minutes -= 24 * 60;
	int h = minutes / 60;
	minutes -= h * 60;

	if (h < 10)
	{
		cout << "0" << h << ":";
	}
	else
	{
		cout << h << ":";
	}

	if (minutes < 10)
	{
		cout << "0" << minutes;
	}
	else
	{
		cout << minutes;
	}
	

	return 0;
}