#include <iostream>

using namespace std;
//3���� ������?
// - N���� ���м����� �־����� �� �� 3���� �� ���м����� ����ϴ� ���α׷��� �ۼ��ϼ���.
//	 ���� �л��� ������ 100���� 3��, 99���� 2��, 98���� 5��, 97���� 3�� �̷������� ������
//	 �����Ǹ� 1���� 3���̸�, 2���� 2���̸� 3���� 5���� �Ǿ� 98���� 3���� �� ������ �˴ϴ�.


int main(int argc, char* argv[])
{
	//ù ��° �ٿ� �ڿ��� N(1<=N<=100)�� �־����ϴ�.
	//�� ��° �ٿ� N���� ���м��� ������ ������ ���̿� �ΰ� �Էµ˴ϴ�.���м��� ������ 100�� ���� �������� �Էµ˴ϴ�.


	int n;

	cin >> n;

	int* select = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> select[i];
	}

	int last = -1, max, tmp;

	for (int i = 0; i < 3; i++)
	{
		max = i;
		for (int j = i + 1; j < n; j++)
			max = select[j] > select[max] && select[j] != last ? j : max;

		if (max != i)
		{
			tmp = select[max];
			select[max] = select[i];
			select[i] = tmp;
		}
		last = select[i];
	}

	cout << select[2];

	return 0;
}