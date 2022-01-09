#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//����� ���
// -�ڿ��� N�� �ԷµǸ� 1���� N������ �� ���ڵ��� ����� ������ ���
int main(int argc, char* argv[])
{
	//���� == 5 <= N <= 50000

	//���� Ǯ�� �� ���� Ǯ��
	//���׿����ڸ� ������� ��, �ٺ������� �ٸ��� ����.
	int n, cnt;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		for (int j = 1; j <= i; j++)
			cnt = i % j == 0 ? cnt + 1 : cnt;
		cout << cnt << " ";
	}

	//1�� ����
	//���ǿ����� N�� ���������� 50000 �ΰ��� �̿�, 5������ int�� �迭 ����
	//�����迭�� ����ؼ� �������⵵�� �ּ�ȭ
	int* cnt_fast = new int[n] {0, };

	for (int i = 1; i <= n; i++)
		for (int j = i - 1; j < n; j += i)
			cnt_fast[j]++;

	for (int i = 0; i < n; i++)
		cout << cnt_fast[i] << " ";

	delete[] cnt_fast;

	return 0;
}