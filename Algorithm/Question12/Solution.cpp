#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//������ �� ����(large)
// -�ڿ��� N�� �ԷµǸ� 1���� N������ �ڿ����� ���̿� ���� �� �� ���ڴ� � �������� ���
int main(int argc, char* argv[])
{
	//����1 == 3 <= N <= 100,000,000
	//����2 == ���ѽð� 1��

	int n, sum1 = 0, c = 1, d = 9, res = 0;

	cin >> n;

	//���� Ǯ��
	//�ϴ� �ڸ����� �ش��ϴ� ������ ��� ���� ��, �������� �������� ���ϴ� ���
	while (sum1 + d < n)
	{
		res = res + (c * d);
		sum1 = sum1 + d;
		c++;
		d *= 10;
	}
	res = res + ((n - sum1) * c);

	//���� Ǯ��
	//���� �˰��� �������� ��� ���� ������.
	//������ �־ ��������.

	int a, sum2 = 0;

	a = n;
	for (int i = 1; n / i != 0; i *= 10)
	{
		sum2 += a;
		a -= 9 * i;
	}

	cout << sum2;

	return 0;
}