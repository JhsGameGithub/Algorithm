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

	int* primeNumber = new int[n + 1]{ 0, };

	int tmp, index;

	for (int i = 2; i <= n; i++)
	{
		tmp = i;
		index = 2;
		while (tmp != 1)
		{
			if (tmp % index == 0)
			{
				tmp = tmp / index;
				primeNumber[index]++;
			}
			else
				index++;
		}
	}

	cout << n << "! =";
	for (int i = 2; i <= n; i++)
		if (primeNumber[i] != 0)
			cout << " " << primeNumber[i];

	//저의 풀이는 3중 반복문을 썼지만, 강의 풀이는 2중 반복문을 썼습니다.
	//습관적으로 메모리를 아껴서 코드를 짜다보니 3중 반복문을 쓸 수 밖에 없었습니다.
	//속도를 더 빠르게 하는 방향으로 코드를 짜는 습관을 들여야 할 것 같습니다.

	return 0;
}