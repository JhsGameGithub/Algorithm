#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//�Ҽ��� ����
// -�ڿ��� N�� �ԷµǸ� 1���� N������ �Ҽ��� ������ ���
int main(int argc, char* argv[])
{
	//����1 == 2 <= N <= 200,000
	//����2 == ���ѽð� 1��

	//���� Ǯ��
	int n, flag, cnt = 0;

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		flag = 1;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
				flag = 0;
			break;
		}
		if (flag == 1)
			cnt++;
	}

	cout << cnt;


	//���� Ǯ��
	//10�� ���� �����غ����� ������ �ڵ尡
	//�������� �ʾ� ���� Ǯ�̸� ��.

	int answer = 0;

	for (int i = 2; i <= n; i++)
	{
		answer++;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				answer--;
				break;
			}
		}
	}
	
	//����� ���� ��, ���� ���� ���õ� ���� ������ ������
	//���´ٴ� ������ ������ �˰� �Ǿ���.

	return 0;
}