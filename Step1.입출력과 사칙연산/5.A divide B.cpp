#include <iostream>

using namespace std;

int main()
{
	double a, b;

	// �Ҽ��� ���� �ڸ��� �����ϰ� �ʹٸ� cout.precision(n)�� ����ؾ��Ѵ�.
	// �׳� precision�� ����ϸ� ���� �ڸ��� n�� �����ϱ⿡ cout.fixed �� ����ؾ��Ѵ�.
	cout.fixed;
	cout.precision(10);
	cout << a / b;

	return 0;
}