#include <iostream>
using namespace std;
/*
문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.
*/
int main()
{
    int a, b;
    cin >> a >> b;
    while (cin.eof() != true) //입력갯수가 정해져있지 않기에, eof를 통해 끝을 확인해야한다.
    {
        printf("%d\n", a + b);
        cin >> a >> b;
    }

    return 0;
}