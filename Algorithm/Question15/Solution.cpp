#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//소수의 개수
// -자연수 N이 입력되면 1부터 N까지의 소수의 개수를 출력
int main(int argc, char* argv[])
{
	//조건1 == 2 <= N <= 200,000
	//조건2 == 제한시간 1초

	//강의 풀이
	int n, flag, cnt = 0;

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		flag = 1;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
				flag = 0;
			break;
		}
		if (flag == 1)
			cnt++;
	}

	cout << cnt;


	//나의 풀이
	//10분 동안 생각해봤지만 적당한 코드가
	//생각나지 않아 강의 풀이를 봄.

	int answer = 0;

	for (int i = 2; i <= n; i++)
	{
		answer++;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				answer--;
				break;
			}
		}
	}
	
	//약수를 구할 때, 작은 수는 제시된 수의 제곱근 까지만
	//나온다는 수학적 지식을 알게 되었음.

	return 0;
}