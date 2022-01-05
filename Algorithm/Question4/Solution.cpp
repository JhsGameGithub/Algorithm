#include <iostream>

using namespace std;

//나이 차이
// -N명의 나이가 입력 되는데, 이 중에서 가장 나이차이가 많이 나는 경우
int main(int argc, char* argv[])
{
	int n, a;

	//강의 풀이
	int max1 = -2147000000, min1 = 2147000000;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > max1)
			max1 = a;
		if (a < min1)
			min1 = a;
	}
	cout << max1 - min1;


	//나의 풀이
	//max와 min을 첫번째 입력값으로 초기화
	//삼항연산자를 통해 크고 작음을 판별
	int max2, min2;

	cin >> n;

	cin >> a;
	max2 = a;
	min2 = a;

	for (int i = 2; i <= n; i++)
	{
		cin >> a;

		max2 = a > max2 ? a : max2;
		min2 = a < min2 ? a : min2;
	}
	cout << max2 - min2;
}