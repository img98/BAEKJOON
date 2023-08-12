#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << a*(b%10)<< endl;
	cout << a * ((b % 100) - (b % 10)) / 10 << endl; //출력예시상 80이 아닌 8이 곱해진 수를 출력해야함
	cout << a * ((b % 1000) - (b % 100)) / 100 << endl;
	cout << a * b;

	return 0;
}