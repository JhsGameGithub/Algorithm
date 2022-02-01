#include <iostream>

using namespace std;

//�µ��� �ִ밪
// - ���� ��ħ 9�ÿ� �б����� ������ �µ��� � ������ ������ �־����� ��, �������� ��ĥ������ �µ��� ���� ���� ū ���� �˾ƺ���.
int main(int argc, char* argv[])
{
	//����1 == ù° �ٿ��� �� ���� ���� N(�µ� ������ ��ü ��¥ ��)�� K(�������� ��¥�� ��)�� �Է�
	//����2 == N�� 2 �̻� 100,000 ����, K�� 1�� N������ ����
	//����3 == ��° �ٿ��� �µ��� ������ N���� ������ �־���. �� ������ ��� -100 �̻� 100 ����.
	//����4 == ���ѽð� 1��
	
	int n, k, sum, max = 0;

	cin >> n >> k;

	int* tempera = new int[n];

	for (int i = 0; i < n; i++)
		cin >> tempera[i];

	for (int i = 0; i < k; i++)
		max += tempera[i];

	sum = max;

	//���ѽð��� 1�ʶ�� ������ ���� ��ģ����, ���Ǹ� ���� ��û��.
	//������ ������ i�� �ʱ�ȭ�� �ٸ�. ���ǿ��� k�� �ʱ�ȭ��.
	//k�� �ʱ�ȭ �ϴ� ���� �������� �� ����.

	//���� Ǯ��
	for (int i = k; i < n; i++)
	{
		sum -= tempera[i - k] - tempera[i];
		max = sum > max ? sum : max;
	}
	//���� Ǯ��
	for (int i = 1; i < n - k; i++)
	{
		sum -= tempera[i - 1] - tempera[i + k - 1];
		max = sum > max ? sum : max;
	}

	cout << max;

	//�������� ���� Ǯ�ٰ� ���󿡼��� ������ ���ѽð� 1�� �ΰ��� ����.(���������� �������� ����)

	return 0;
}