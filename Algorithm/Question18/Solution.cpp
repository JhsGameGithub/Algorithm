#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//층간소음
// -층간소음 발생시 측정치 M값을 넘으면 N초 동안 경보음이 울림. 최대 연속으로 경보음이 울린 시간 출력
int main(int argc, char* argv[])
{
	//조건1 == 자연수 N 10 <= N <= 100 과 M을 입력
	int n, m;

	//강의 풀이
	int val, cnt = 0, max2 = -2147000000;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		if (m > val)
			cnt++;
		else
			cnt = 0;
		if (cnt > max2)
			max2 = cnt;
	}
	if (max2 == 0)
		printf("-1\n");
	else
		printf("%d\n", max2);

	//나의 풀이
	int noise, max = -1, current = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> noise;

		current = noise > m ? current + 1 : 0;
		max = current > max ? current : max;
	}

	cout << max;

	return 0;
}