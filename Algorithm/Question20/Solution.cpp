#include <iostream>

using namespace std;

//가위 바위 보
// -두 사람이 가위바위보 하는 게임을 개발합니다.
int main(int argc, char* argv[])
{
	//조건1 == 1: 가위, 2: 바위, 3: 보
	//조건2 == 게임 횟수 1 <= N <= 100 회
	
	int n, a, b;

	int CounterGraph[3][3] = { {'D','B','A'},{'A','D','B'},{'B','A','D'} };

	cin >> n;

	int* answer = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		cin >> b;
		answer[i] = CounterGraph[a - 1][b - 1];
	}

	for (int i = 0; i < n; i++)
	{
		cout << (char)answer[i] << endl;
	}

	return 0;
}