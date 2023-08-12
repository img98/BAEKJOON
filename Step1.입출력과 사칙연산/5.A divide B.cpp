#include <iostream>

using namespace std;

int main()
{
	double a, b;

	// 소수점 이하 자리를 고정하고 싶다면 cout.precision(n)을 사용해야한다.
	// 그냥 precision만 사용하면 정수 자리도 n에 포함하기에 cout.fixed 를 사용해야한다.
	cout.fixed;
	cout.precision(10);
	cout << a / b;

	return 0;
}