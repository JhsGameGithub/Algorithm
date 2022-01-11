#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//가장 많이 사용된 자릿수
// -N자리의 자연수가 입력되면 입력된 자연수 중 가장 많이 사용된 숫자를 출력
int main(int argc, char* argv[])
{
	//조건1 == 자연수의 길이는 100을 넘지 않음
	
	//강의 풀이
	//강의에선 배열 초기화를 안해줘서 수정했습니다.
	int ch[10] = { 0, };
	int digit, max1 = -2147000000, res;
	char a[101];
	scanf("%s", &a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		digit = a[i] - 48;
		ch[digit]++;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (ch[i] >= max1)
		{
			max1 = ch[i];
			res = i;
		}
	}
	printf("%d\n", res);

	//나의 풀이
	int n, max2 = 0, answer[10] = { 0, };

	cin >> n;

	for (int i = 10; n != 0; n /= i)
		answer[n % i]++;

	for (int i = 0; i < 10; i++)
		max2 = answer[i] >= answer[max2] ? i : max2;

	cout << max2;

	return 0;
}