#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int digit_sum(int x)
{
	if (x / 10 == 0)
		return x;

	return x % 10 + digit_sum(x / 10);
}

//�ڸ����� ��
// -N���� �ڿ����� �ԷµǸ� �� �ڿ����� �ڸ����� ���� ���ϰ�, �� ���� �ִ��� �ڿ����� ���
int main(int argc, char* argv[])
{
	//����1 == 3 <= N <= 50000
	//����2 == �� �ڿ����� �ڸ��� ���� ���ϴ� �Լ� int digit_sum(int x) �ۼ�

	int n, a, max, sum, max_sum;

	cin >> n;

	//���� Ǯ��
	//��ü������ ����ϳ�, �Լ����� While�� ���.
	//����(�޸�)�� �� ����� �Լ� ȣ���� ����.

	//���� Ǯ��
	//��� �Լ� ���.
	//�Լ� ȣ���� 4�����̳� �Ǽ� ��ȿ����.
	//���� Ǯ�̸� ���� �� �� ������Ŵ.
	cin >> a;

	max = a;
	max_sum = digit_sum(a);


	for (int i = 1; i < n; i++)
	{
		cin >> a;
		sum = digit_sum(a);
		//[before]
		//if(digit_sum(a) > digit(max))
		if (sum > max_sum)
		{
			max = a;
			max_sum = sum;
		}
		//[before]
		//if(digit_sum(a) == digit(max))
		else if (sum == max_sum)
			if (a > max)
				max = a;
	}

	cout << max;

	return 0;
}