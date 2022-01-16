#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//분노 유발자
// -한 줄에 앉은 키 정보가 주어지면 뒷사람 모두의 시야를 가려 시청이 불가능하게 하는 분노유발자가 몇 명 있는지 구하기
int main(int argc, char* argv[])
{
	//조건1 == 첫 줄에 학생수 3 <= N <= 100
	//조건2 == 둘째줄에 키 정보 앞 자리 학생부터 차례대로 입력
	
	int n;

	cin >> n;
	//강의 풀이
	int cnt = 0, h[101], max;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &h[i]);
	}
	max = h[n];
	for (int i = n - 1; i >= 1; i--)
	{
		if (h[i] > max)
		{
			max = h[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);

	//나의 풀이
	//너무 1차원 적으로 생각해서 뒤에서 부터
	//반복문 돌릴 생각을 못하고 2중 반복문을
	//사용해 문제를 풀었음.
	int* student = new int[n];

	for (int i = 0; i < n; i++)
		cin >> student[i];

	int answer = 0, blocked = 0;

	for (int i = 0; i < n - 1; i++)
	{
		blocked = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (student[i] > student[j])
				blocked++;
			else
				break;
		}
		answer = blocked == n - i - 1 ? answer + 1 : answer;
	}

	cout << answer;

	delete[] student;
	return 0;
}