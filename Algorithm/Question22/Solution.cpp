#include <iostream>

using namespace std;

//�µ��� �ִ밪
// - ���� ��ħ 9�ÿ� �б����� ������ �µ��� � ������ ������ �־����� ��, �������� ��ĥ������ �µ��� ���� ���� ū ���� �˾ƺ���.
int main(int argc, char* argv[])
{
	//����1 == ù° �ٿ��� �� ���� ���� N(�µ� ������ ��ü ��¥ ��)�� K(�������� ��¥�� ��)�� �Է�
	//����2 == N�� 2 �̻� 100,000 ����, K�� 1�� N������ ����
	//����3 == ��° �ٿ��� �µ��� ������ N���� ������ �־���. �� ������ ��� -100 �̻� 100 ����.
	
	int n, k, sum, max = 0;

	cin >> n >> k;

	int* tempera = new int[n];

	for (int i = 0; i < n; i++)
		cin >> tempera[i];

	for (int i = 0; i < k; i++)
		max += tempera[i];

	for (int i = 1; i < n - k; i++)
	{
		sum = 0;
		for (int j = i; j < i + k; j++)
			sum += tempera[j];
		max = sum > max ? sum : max;
	}

	cout << max;

	return 0;
}