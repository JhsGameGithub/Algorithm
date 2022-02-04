#include <iostream>

using namespace std;

//3의 개수는?[large]
// - 자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자 중 3의 개수가 몇 개 있는지 구하려고 합니다.
//	 예를 들어 1부터 15까지는 1, 2, [3], 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, [3], 1, 4, 1, 5으로 3의 개수는 2개입니다.
//	 자연수 N이 입력되면 1부터 N까지 숫자를 적을 때, 3의 개수가 몇 개인지 구하여 출력하는 프로그램을 작성하세요.

int main(int argc, char* argv[])
{
	//첫 줄에 자연수의 개수 N(3<=N<=1,000,000,000)이 주어집니다.

	int n, digit, count = 0;

	cin >> n;

	for (int i = 1; n != 0; i *= 10)
	{
		digit = n % 10;
		n /= 10;
		count += digit > 2 ? (n + 1) * i : n * i;
	}

	cout << count;

	return 0;
}