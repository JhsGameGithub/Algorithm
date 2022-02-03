#include <iostream>

using namespace std;

//N!의 표현법
// - 임의의 N에 대하여 N!은 1부터 N까지의 곱을 의미한다. 이는 N이 커짐에 따라 급격하게 커진다.
//	 이러한 큰 수를 표현하는 방법으로 소수들의 곱으로 표현하여 출력하시오.

int main(int argc, char* argv[])
{
	//첫 줄에 자연수 N(3<=N<=1000)이 입력된다.

	int n;

	cin >> n;

	bool primeNumber;

	int count, temp;

	cout << n << "! =";

	for (int i = 2; i <= n; i++)
	{
		count = 0;
		primeNumber = true;

		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				primeNumber = false;
				break;
			}
		}

		if (primeNumber)
		{
			for (int k = 2; k <= n; k++)
			{
				temp = k;
				while (temp % i==0)
				{
					temp /= i;
					count++;
				}
			}

			cout << " " << count;
		}
		else
			continue;
	}

	return 0;
}