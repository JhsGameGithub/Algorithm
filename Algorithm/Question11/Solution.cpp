#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//숫자의 총 개수(small)
// -자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자는 몇개 쓰였는지 출력
int main(int argc, char* argv[])
{
	//조건1 == 3 <= N <= 100,000
	
	int n, a, sum1 = 0, sum2 = 0;

	cin >> n;

	//강의 풀이
	//수가 많아지면 그만큼 오래 걸린다.
	int tmp;

	for (int i = 1; i <= n; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			tmp = tmp / 10;
			sum1++;
		}
	}

	//나의 풀이
	//생각하는데 시간이 걸림.
	//배열을 n개만큼 선언해서 10으로 나눈 나머지 수까지 +1 하는 생각에서 도출함.

	a = n;
	for (int i = 1; n / i != 0; i *= 10)
	{
		sum2 += a;
		a -= 9 * i;
	}

	cout << sum2;

	return 0;
}