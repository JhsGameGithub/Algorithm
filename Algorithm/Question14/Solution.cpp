#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//���� �Լ�
int C_reverse(int x)
{
	int res = 0, tmp;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

bool C_isPrime(int x)
{
	int i;
	bool flag = true;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

//���� �Լ�
int reverse(int x)
{
	int tmp = 0;

	for (int i = x; i != 0; i /= 10)
	{
		tmp *= 10;
		tmp += i % 10;
	}

	return tmp;
}

bool isPrime(int x)
{
	if (x == 1)
		return false;
	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0)
			return false;
	return true;
}

//������ �Ҽ�
// -N���� �ڿ����� �ԷµǸ� �� �ڿ����� ������ �� �� ������ ���� �Ҽ��̸� �� ���� ���
int main(int argc, char* argv[])
{
	//����1 == �ڿ����� ���� 3 <= N < 100 ���� �־���
	//����2 == �ڿ����� ũ��� 1,000,000 �� ���� ����
	//����3 == ������ �Լ� int reverse(int x), �Ҽ��˻� �Լ� bool isPrime(int x) �ۼ�

	//���� Ǯ��
	int n2, num, tmp;
	scanf("%d", &n2);
	for (int i = 1; i <= n2; i++)
	{
		scanf("%d", &num);
		tmp = C_reverse(num);
		if (isPrime(tmp))
			printf("%d ", tmp);
	}
	
	//���� Ǯ��
	int n, a;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		a = reverse(a);
		if (isPrime(a))
			cout << a << " ";
	}

	return 0;
}