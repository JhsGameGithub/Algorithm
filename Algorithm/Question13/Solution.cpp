#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//���� ���� ���� �ڸ���
// -N�ڸ��� �ڿ����� �ԷµǸ� �Էµ� �ڿ��� �� ���� ���� ���� ���ڸ� ���
int main(int argc, char* argv[])
{
	//����1 == �ڿ����� ���̴� 100�� ���� ����
	
	//���� Ǯ��
	//���ǿ��� �迭 �ʱ�ȭ�� �����༭ �����߽��ϴ�.
	int ch[10] = { 0, };
	int digit, max1 = -2147000000, res;
	char a[101];
	scanf("%s", &a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		digit = a[i] - 48;
		ch[digit]++;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (ch[i] >= max1)
		{
			max1 = ch[i];
			res = i;
		}
	}
	printf("%d\n", res);

	//���� Ǯ��
	int n, max2 = 0, answer[10] = { 0, };

	cin >> n;

	for (int i = 10; n != 0; n /= i)
		answer[n % i]++;

	for (int i = 0; i < 10; i++)
		max2 = answer[i] >= answer[max2] ? i : max2;

	cout << max2;

	return 0;
}