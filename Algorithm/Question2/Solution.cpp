#include <iostream>

using namespace std;

//자연수의 합
// -자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력
int main(int argc, char* argv[])
{
	int a, b;
	int sum1 = 0;
	int sum2 = 0;

	cin >> a >> b;

	//강의 풀이
	for (int i = a; i < b; i++)
	{
		cout << i << " + ";
		sum1 += i;
	}

	cout << b << " = " << sum1 + b;

	cout << endl;

	//나의 풀이
	//등차수열의 합 공식 사용
	sum2 = ((a + b) * (b - a + 1)) / 2;

	for (int i = a; i < b; i++)
	{
		cout << i << " + ";
	}

	cout << b << " = " << sum2;
}