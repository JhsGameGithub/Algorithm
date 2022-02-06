#include <iostream>

using namespace std;
//선택정렬
// - N개이 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램을 작성하세요.
//	 정렬하는 방법은 선택정렬입니다.

int main(int argc, char* argv[])
{
	//첫 번째 줄에 자연수 N(1<=N<=100)이 주어집니다.
	//두 번째 줄에 N개의 자연수가 공백을 사이에 두고 입력됩니다.각 자연수는 정수형 범위 안에 있습니다.

	int n;

	cin >> n;

	int* select = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> select[i];
	}

	int tmp, min, index;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = select[min] > select[j] ? j : min;

		if (min != i)
		{
			tmp = select[index];
			select[index] = select[i];
			select[i] = tmp;
		}
	}

	return 0;
}