#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	// cout은 너무 큰자리는 출력하지 못한다. precision으로 강제로 출력하게 만들자.
	cout.precision(13);
	cout << a + b + c;

	return 0;
}