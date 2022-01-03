#include <iostream>

using namespace std;

//1부터 N까지의 M의 배수 합
int main(int argc, char* argv[])
{
	int n, m;
	int sum1 = 0;
	int sum2 = 0;

	cin >> n >> m;

	//강의 풀이
	for (int i = 1; i < n; i++)
		if (i % m == 0)
			sum1 += i;

	//나의 풀이
	//등차수열의 합 공식 사용
	sum2 = (n / m * (m + n - n % m)) / 2;

	cout << sum1 << " " << sum2;
}