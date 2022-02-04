#include <iostream>

using namespace std;

//N!에서 0의 개수
// - 자연수 N이 입력되면 N! 값에서 일의 자리부터 연속적으로 ‘0’이 몇 개 있는지 구하는 프로그램을 작성하세요.
//	 만약 5!= 5 ×4 × 3 × 2 ×1 = 120으로 일의자리부터 연속적된 ‘0’의 개수는 1입니다.
//	 만약 12!= 479001600으로 일의자리부터 연속적된 ‘0’의 개수는 2입니다.

int main(int argc, char* argv[])
{
	//첫 줄에 자연수 N(10<=N<=1000)이 입력된다.
	//소인수 분해를 응용 하시오.
	int n, temp, count = 0;

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		temp = i;
		while (temp % 5 == 0)
		{
			temp /= 5;
			count++;
		}
	}

	cout << count;

	return 0;
}