#include <iostream>

using namespace std;

//마라톤
// - KSEA 장거리 달리기 대회가 진행되어 모든 선수가 반환점을 넘었다. 각 선수의 입장에서
//	 자기보다 앞에 달리고 있는 선수들 중 평소 실력이 자기보다 좋은 선수를 남은 거리 동안
//	 앞지르는 것은 불가능하다.반대로, 평소 실력이 자기보다 좋지 않은 선수가 앞에 달리고 있으면
//	 남은 거리 동안 앞지르는 것이 가능하다.이러한 가정 하에서 각 선수는 자신이 앞으로 얻을
//	 수 있는 최선의 등수를 알 수 있다. 최선의 등수를 출력하시오

int main(int argc, char* argv[])
{
	//첫째 줄에는 선수의 수를 의미하는 정수 N이 주어진다.N은 3 이상 10, 000 이하이다.다음
	//줄에는 N개의 정수가 주어진다.이 값들은 각 선수들의 평소 실력을 앞에서 달리고 있는 선수
	//부터 제시한 것이다.각 정수는 1 이상 100, 000 이하이다.참가한 선수의 평소실력은 같을 수
	//있습니다.그리고 실력이 같다면 앞에 달리는 선수를 앞지를 수 없습니다.

	int n;
	
	cin >> n;

	int* player = new int[n] {0, };
	int* number = new int[n] {0, };
	int best = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> player[i];

		number[i] = 1;
		if (player[i] > best)
			best = player[i];
		else
			for (int j = 0; j < i; j++)
				number[i] = player[i] <= player[j] ? number[i] + 1 : number[i];
	}

	for (int i = 0; i < n; i++)
		cout << number[i] << " ";

	return 0;
}