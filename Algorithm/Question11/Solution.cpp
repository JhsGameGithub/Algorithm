#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//������ �� ����(small)
// -�ڿ��� N�� �ԷµǸ� 1���� N������ �ڿ����� ���̿� ���� �� �� ���ڴ� � �������� ���
int main(int argc, char* argv[])
{
	//����1 == 3 <= N <= 100,000
	
	int n, a, sum1 = 0, sum2 = 0;

	cin >> n;

	//���� Ǯ��
	//���� �������� �׸�ŭ ���� �ɸ���.
	int tmp;

	for (int i = 1; i <= n; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			tmp = tmp / 10;
			sum1++;
		}
	}

	//���� Ǯ��
	//�����ϴµ� �ð��� �ɸ�.
	//�迭�� n����ŭ �����ؼ� 10���� ���� ������ ������ +1 �ϴ� �������� ������.

	a = n;
	for (int i = 1; n / i != 0; i *= 10)
	{
		sum2 += a;
		a -= 9 * i;
	}

	cout << sum2;

	return 0;
}