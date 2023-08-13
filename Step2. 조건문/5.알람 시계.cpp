#include <iostream>
using namespace std;

int main()
{
	int hour, minute;
	cin >> hour >> minute;

	int TimeSum = 60 * hour + minute;

	int AfterTime = TimeSum - 45;
	if (AfterTime >= 0)
	{
		int AfterHour = AfterTime / 60;
		int AfterMinute = AfterTime % 60;

		cout << AfterHour<< " " << AfterMinute;
	}
	else
	{
		AfterTime = (60 * 24) + TimeSum - 45;
		int AfterHour = AfterTime / 60;
		int AfterMinute = AfterTime % 60;

		cout << AfterHour << " " << AfterMinute;
	}

	return 0;
}