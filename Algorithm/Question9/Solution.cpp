#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//모두의 약수
// -자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수의 개수를 출력
int main(int argc, char* argv[])
{
	//조건 == 5 <= N <= 50000

	//강의 풀이 및 나의 풀이
	//삼항연산자를 사용했을 뿐, 근본적으로 다른게 없음.
	int n, cnt;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		for (int j = 1; j <= i; j++)
			cnt = i % j == 0 ? cnt + 1 : cnt;
		cout << cnt << " ";
	}

	//1초 이하
	//강의에서는 N의 갯수제한이 50000 인것을 이용, 5만개의 int형 배열 선언
	//동적배열을 사용해서 공간복잡도를 최소화
	int* cnt_fast = new int[n] {0, };

	for (int i = 1; i <= n; i++)
		for (int j = i - 1; j < n; j += i)
			cnt_fast[j]++;

	for (int i = 0; i < n; i++)
		cout << cnt_fast[i] << " ";

	delete[] cnt_fast;

	return 0;
}