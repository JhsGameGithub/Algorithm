#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//강의 함수
int C_reverse(int x)
{
	int res = 0, tmp;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

bool C_isPrime(int x)
{
	int i;
	bool flag = true;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

//나의 함수
int reverse(int x)
{
	int tmp = 0;

	for (int i = x; i != 0; i /= 10)
	{
		tmp *= 10;
		tmp += i % 10;
	}

	return tmp;
}

bool isPrime(int x)
{
	if (x == 1)
		return false;
	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0)
			return false;
	return true;
}

//뒤집은 소수
// -N개의 자연수가 입력되면 각 자연수를 뒤집은 후 그 뒤집은 수가 소수이면 그 수를 출력
int main(int argc, char* argv[])
{
	//조건1 == 자연수의 개수 3 <= N < 100 개가 주어짐
	//조건2 == 자연수의 크기는 1,000,000 이 넘지 않음
	//조건3 == 뒤집는 함수 int reverse(int x), 소수검사 함수 bool isPrime(int x) 작성

	//강의 풀이
	int n2, num, tmp;
	scanf("%d", &n2);
	for (int i = 1; i <= n2; i++)
	{
		scanf("%d", &num);
		tmp = C_reverse(num);
		if (isPrime(tmp))
			printf("%d ", tmp);
	}
	
	//나의 풀이
	int n, a;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		a = reverse(a);
		if (isPrime(a))
			cout << a << " ";
	}

	return 0;
}