﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
문제
단어S와 정수i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 S가 주어진다. 단어의 길이는 최대 1000이다.
둘째 줄에 정수 i가 주어진다.

출력
S의 i번째 글자를 출력한다.
*/


int main()
{
    char arr[1001];
    int i;
    scanf("%s\n %d", arr, &i);

    printf("%c", arr[i-1]);

    return 0;
}
