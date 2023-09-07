#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

/*
문제
알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

출력
첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.
*/

void another() //string을 사용하지 않고 문자열 배열로 구현했다.
{
	char str[101]; //무작정 큰 배열을 미리 준비해야하기에 string보다 비효율적으로 보인다.
	scanf("%s", str);
	int len = 0;
	for (char a : str)
	{
		if (a == '\0') //문자열의 끝은 '\0'
		{
			break;
		}
		++len;
	}

	printf("%d", len);
}

int main()
{
	/* 
	string str;
	cin >> str;
	int len = str.length();
	printf("%d", len);
	*/
	another();

	return 0;
}
