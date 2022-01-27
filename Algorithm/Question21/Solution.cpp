#include <iostream>

using namespace std;

//카드 게임
// - A와 B가 하는 카드게임. 각각 0부터 9 표시된 카드가 주어지고, 한 라운드마다 뒤집어서 숫자가 큰 쪽이 승리
int main(int argc, char* argv[])
{
	//조건1 == 첫 번째 줄에는 A의 숫자, 두 번째 줄에는 B의 숫자
	//조건2 == 라운드는 10 라운드
	//조건3 == 승리는 3점, 무승부는 1점씩. 점수와 승자를 출력.

	int aCard[10];
	int bCard[10];
	int aScore = 0, bScore = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> aCard[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> bCard[i];
	}

	for (int i = 0; i < 10; i++)
	{
		aScore = aCard[i] > bCard[i] ? aScore + 3 : aScore;
		bScore = aCard[i] < bCard[i] ? bScore + 3 : bScore;

		if (aCard[i] == bCard[i])
		{
			aScore++;
			bScore++;
		}
	}

	cout << aScore << " " << bScore << endl;
	if (aScore > bScore)
		cout << 'A';
	else if (aScore = bScore)
		cout << 'D';
	else
		cout << 'B';

	return 0;
}