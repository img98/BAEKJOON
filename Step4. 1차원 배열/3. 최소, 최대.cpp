﻿#include <iostream>
using namespace std;
/*
문제
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다.
모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

출력
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
*/

int main()
{
	int N;
	scanf("%d", &N);
	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0], min = arr[0];

	for (int i = 0; i < N; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d %d", min, max);

	free(arr);
	return 0;
}
