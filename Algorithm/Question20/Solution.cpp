#include <iostream>

using namespace std;

//���� ���� ��
// -�� ����� ���������� �ϴ� ������ �����մϴ�.
int main(int argc, char* argv[])
{
	//����1 == 1: ����, 2: ����, 3: ��
	//����2 == ���� Ƚ�� 1 <= N <= 100 ȸ
	
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