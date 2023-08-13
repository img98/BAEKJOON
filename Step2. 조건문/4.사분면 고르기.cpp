#include <iostream>
using namespace std;
/* 
INPUT : 첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0) 다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0)
OUTPUT : 점(x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.

    그냥 인풋받고 돌리기만 해도 되지만, 그러면 쓸데없는 조건문이 많아질것같아 구조체 형식으로 도전해봤다.
*/
struct dot
{
    int updown = 0;
    int leftright = 0;
};

int main()
{
    dot InDot;
    int A, B;
    cin >> A >> B;

    if (A > 0)
    {
        InDot.updown = 1;
    }
    if (B > 0)
    {
        InDot.leftright = 1;
    }

    if (InDot.updown == 1)
    {
        if (InDot.leftright == 1)
        {
            cout << "1";
        }
        else
        {
            cout << "4";
        }
    }
    else
    {
        if (InDot.leftright == 1)
        {
            cout << "2";
        }
        else
        {
            cout << "3";
        }
    }

    return 0;
}