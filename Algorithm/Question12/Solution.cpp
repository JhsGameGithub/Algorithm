#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//숫자의 총 개수(large)
// -자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자는 몇개 쓰였는지 출력
int main(int argc, char* argv[])
{
	//조건1 == 3 <= N <= 100,000,000
	//조건2 == 제한시간 1초

	int n, sum1 = 0, c = 1, d = 9, res = 0;

	cin >> n;

	//강의 풀이
	//일단 자릿수에 해당하는 갯수를 모두 더한 후, 마지막에 나머지를 더하는 방식
	while (sum1 + d < n)
	{
		res = res + (c * d);
		sum1 = sum1 + d;
		c++;
		d *= 10;
	}
	res = res + ((n - sum1) * c);

	//나의 풀이
	//직전 알고리즘 문제에서 썼던 것을 가져옴.
	//오류가 있어서 수정했음.

	int a, sum2 = 0;

	a = n;
	for (int i = 1; n / i != 0; i *= 10)
	{
		sum2 += a;
		a -= 9 * i;
	}

	cout << sum2;

	return 0;
}