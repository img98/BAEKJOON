#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << a*(b%10)<< endl;
	cout << a * ((b % 100) - (b % 10)) / 10 << endl; //��¿��û� 80�� �ƴ� 8�� ������ ���� ����ؾ���
	cout << a * ((b % 1000) - (b % 100)) / 100 << endl;
	cout << a * b;

	return 0;
}