#include <iostream>

using namespace std;

//ī�� ����
// - A�� B�� �ϴ� ī�����. ���� 0���� 9 ǥ�õ� ī�尡 �־�����, �� ���帶�� ����� ���ڰ� ū ���� �¸�
int main(int argc, char* argv[])
{
	//����1 == ù ��° �ٿ��� A�� ����, �� ��° �ٿ��� B�� ����
	//����2 == ����� 10 ����
	//����3 == �¸��� 3��, ���ºδ� 1����. ������ ���ڸ� ���.

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