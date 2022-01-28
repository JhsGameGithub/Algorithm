#include <iostream>

using namespace std;

//카드 게임
// - A와 B가 하는 카드게임. 각각 0부터 9 표시된 카드가 주어지고, 한 라운드마다 뒤집어서 숫자가 큰 쪽이 승리
int main(int argc, char* argv[])
{
	//조건1 == 첫 번째 줄에는 A의 숫자, 두 번째 줄에는 B의 숫자
	//조건2 == 라운드는 10 라운드
	//조건3 == 승리는 3점, 무승부는 1점씩. 점수와 승자를 출력.
	//조건4 == 점수가 같다면, 마지막 승리자 출력.
	//조건5 == 모든 라운드에서 비겨서 점수가 같다면, D를 출력.

	int aCard[10];
	int bCard;
	int score[2] = { 0,0 };
	char lastWinner = 'D';
	bool winner;

	for (int i = 0; i < 10; i++)
	{
		cin >> aCard[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> bCard;

		//A Score == score[0]
		//B Score == score[1]

		if (aCard[i] == bCard)
		{
			score[0]++;
			score[1]++;
			continue;
		}
		winner = aCard[i] > bCard ? 0 : 1;
		score[winner] += 3;
		lastWinner = winner + 65;
	}

	cout << score[0] << " " << score[1] << endl;

	if (score[0] > score[1])
		cout << 'A';
	else if (score[0] < score[1])
		cout << 'B';
	else
		cout << lastWinner;

	//문제를 제대로 읽지 않아 프로그램이 의도와 달리 작동됨.
	//강의를 시청 후, 빠진 부분을 다시 자세하게 읽고 고침.

	return 0;
}