#include <iostream>

using namespace std;

//온도의 최대값
// - 매일 아침 9시에 학교에서 측정한 온도가 어떤 정수의 수열로 주어졌을 때, 연속적인 며칠동안의 온도의 합이 가장 큰 값을 알아보자.
int main(int argc, char* argv[])
{
	//조건1 == 첫째 줄에는 두 개의 정수 N(온도 측정한 전체 날짜 수)과 K(연속적인 날짜의 수)가 입력
	//조건2 == N은 2 이상 100,000 이하, K는 1과 N사이의 정수
	//조건3 == 둘째 줄에는 온도를 측정한 N개의 정수가 주어짐. 이 수들은 모두 -100 이상 100 이하.
	
	int n, k, sum, max = 0;

	cin >> n >> k;

	int* tempera = new int[n];

	for (int i = 0; i < n; i++)
		cin >> tempera[i];

	for (int i = 0; i < k; i++)
		max += tempera[i];

	for (int i = 1; i < n - k; i++)
	{
		sum = 0;
		for (int j = i; j < i + k; j++)
			sum += tempera[j];
		max = sum > max ? sum : max;
	}

	cout << max;

	return 0;
}