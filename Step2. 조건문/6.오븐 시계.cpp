#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int hour = A;
	int minute = B + C;

	if (minute > 59)
	{
		minute = (B + C) % 60;
		hour = A + (B + C) / 60;
	}
	hour %= 24;

	cout << hour << " " << minute;

	return 0;
}