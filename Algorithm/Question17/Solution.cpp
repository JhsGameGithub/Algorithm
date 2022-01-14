#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//선생님 퀴즈
// -선생님이 N명의 학생들에게 내는 1부터 주어진 자연수 까지의 합을 구하는 퀴즈를 자동 채점하는 프로그램
int main(int argc, char* argv[])
{
	//조건1 == 학생수는 1 <= N <= 명
	//조건2 == 카드의 적힌 수는 1000을 넘지 않음

	int n;

	//강의 풀이
	int sum = 0, m, ans;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &m, &ans);
		sum = 0;
		for (int j = 1; j <= m; j++)
		{
			sum += j;
		}
		if (ans = sum)
			printf("Yes\n");
		else
			printf("No\n");
	}

	//나의 풀이
	cin >> n;

	int question[10], answer[10];

	for (int i = 0; i < n; i++)
	{
		cin >> question[i];
		cin >> answer[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (question[i] * (1 + question[i]) / 2 == answer[i])
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}