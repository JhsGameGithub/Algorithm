#include <iostream>

using namespace std;

//ī�� ����
// - A�� B�� �ϴ� ī�����. ���� 0���� 9 ǥ�õ� ī�尡 �־�����, �� ���帶�� ����� ���ڰ� ū ���� �¸�
int main(int argc, char* argv[])
{
	//����1 == ù ��° �ٿ��� A�� ����, �� ��° �ٿ��� B�� ����
	//����2 == ����� 10 ����
	//����3 == �¸��� 3��, ���ºδ� 1����. ������ ���ڸ� ���.
	//����4 == ������ ���ٸ�, ������ �¸��� ���.
	//����5 == ��� ���忡�� ��ܼ� ������ ���ٸ�, D�� ���.

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

	//������ ����� ���� �ʾ� ���α׷��� �ǵ��� �޸� �۵���.
	//���Ǹ� ��û ��, ���� �κ��� �ٽ� �ڼ��ϰ� �а� ��ħ.

	return 0;
}