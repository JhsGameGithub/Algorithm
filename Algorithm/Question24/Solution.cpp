#include <iostream>

using namespace std;

//Jolly Jumper(유쾌한 점퍼)
// - N개의 정수로 이루어진 수열에 대해 서로 인접해 있는 두 수의 차가 1에서 N-1까지의 값을 
//	 모두 가지면 그 수열을 유쾌한 점퍼(jolly jumper)라고 부른다.예를 들어 다음과 같은
//	 수열에서 1 4 2 3 앞 뒤에 있는 숫자 차의 절대 값이 각각 3, 2, 1이므로 이 수열은 유쾌한 점퍼가
//	 된다.어떤 수열이 유쾌한 점퍼인지 판단할 수 있는 프로그램을 작성.
int main(int argc, char* argv[])
{
	//첫 번째 줄에 자연수 N(3 <= N <= 100)이 주어진다.
	//그 다음 줄에 N개의 정수가 주어진다.정수의 크기는 int 형 범위안에 있으며, 인접한 두 수의
	//차도 정수형 범위에 있습니다.

	int n, index, current, previous;

	cin >> n;

	bool* sequence = new bool[n - 1]{ false, };

	cin >> previous;

	for (int i = 1; i < n; i++)
	{
		cin >> current;

		index = current - previous > 0 ? current - previous : previous - current;

		sequence[--index] = true;

		previous = current;
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (!sequence[i])
		{
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}