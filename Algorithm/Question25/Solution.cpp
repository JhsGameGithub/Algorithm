#include <iostream>

using namespace std;

//���� ���ϱ�
// - N���� �л��� ���������� �ԷµǸ� �� �л��� ������ �Էµ� ������� ����ϴ� ���α׷��� 
//	 �ۼ��ϼ���.
int main(int argc, char* argv[])
{
	//ù �ٿ� N(1 <= N <= 100)�� �Էµǰ�, �� ��° �ٿ� ���������� �ǹ��ϴ� N���� ������ �Էµȴ�.
	//���� ������ �Էµ� ��� ���� ������ ���� ó���Ѵ�.�� ���� ���� ������ 92���ε� 92����
	//3�� �����ϸ� 1���� 3���̰� �� ���� �л��� 4���� �ȴ�.������ 100�� �����̴�.

	int n;

	cin >> n;

	int* score = new int[n] {0, };
	int* number = new int[n];

	for (int i = 0; i < n; i++)
		cin >> score[i];

	for (int i = 0; i < n; i++)
	{
		number[i] = 1;
		for (int j = 0; j < n; j++)
			number[i] = score[i] < score[j] ? number[i] + 1 : number[i];
	}

	for (int i = 0; i < n; i++)
		cout << number[i] << " ";

	//���� ��û �� Ư�̻��� ����.

	return 0;
}