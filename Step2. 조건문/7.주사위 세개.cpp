#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	int prize;
	cin >> A >> B >> C;

	if (A == B && B == C)
	{
		prize = 10000 + A * 1000;
	}
	else if (A != B && B != C && A != C)
	{
		int big = A;
		if (big < B)
		{
			big = B;
		}
		if (big < C)
		{
			big = C;
		}
		prize = big * 100;
	}
	else
	{
		int same = A;
		if (B == C)
		{
			same = B;
		}
		prize = 1000 + same * 100;
	}

	cout << prize;

	return 0;
}