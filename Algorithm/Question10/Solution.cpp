#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int digit_sum(int x)
{
	if (x / 10 == 0)
		return x;

	return x % 10 + digit_sum(x / 10);
}

//자릿수의 합
// -N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인 자연수를 출력
int main(int argc, char* argv[])
{
	//조건1 == 3 <= N <= 50000
	//조건2 == 각 자연수의 자릿수 합을 구하는 함수 int digit_sum(int x) 작성

	int n, a, max, sum, max_sum;

	cin >> n;

	//강의 풀이
	//전체적으로 비슷하나, 함수에서 While문 사용.
	//변수(메모리)를 더 사용해 함수 호출을 줄임.

	//나의 풀이
	//재귀 함수 사용.
	//함수 호출이 4번씩이나 되서 비효율적.
	//강의 풀이를 보고 좀 더 발전시킴.
	cin >> a;

	max = a;
	max_sum = digit_sum(a);


	for (int i = 1; i < n; i++)
	{
		cin >> a;
		sum = digit_sum(a);
		//[before]
		//if(digit_sum(a) > digit(max))
		if (sum > max_sum)
		{
			max = a;
			max_sum = sum;
		}
		//[before]
		//if(digit_sum(a) == digit(max))
		else if (sum == max_sum)
			if (a > max)
				max = a;
	}

	cout << max;

	return 0;
}