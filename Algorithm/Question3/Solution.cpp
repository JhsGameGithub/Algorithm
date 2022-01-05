#include <iostream>

using namespace std;

//진약수의 합
//- 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력
int main(int argc, char* argv[])
{
	//조건 == 3 < N <= 100

	int n;
	int sum1 = 1;
	int sum2 = 1;

	cin >> n;

	//강의 풀이

	cout << sum1;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << " + " << i;
			sum1 += i;
		}
	}

	cout << " = " << sum1;

	cout << endl;

	//나의 풀이
	//모든 약수는 자기 자신을 제외하고 절반 이하에서 나옴
	cout << sum2;
	
	for (int i = 2; i < (n / 2) + 1; i++)
	{
		if (n % i == 0)
		{
			cout << " + " << i;
			sum2 += i;
		}
	}

	cout << " = " << sum2;
}