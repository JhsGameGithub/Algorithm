#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//������ ����
// -�������� N���� �л��鿡�� ���� 1���� �־��� �ڿ��� ������ ���� ���ϴ� ��� �ڵ� ä���ϴ� ���α׷�
int main(int argc, char* argv[])
{
	//����1 == �л����� 1 <= N <= ��
	//����2 == ī���� ���� ���� 1000�� ���� ����

	int n;

	//���� Ǯ��
	int sum = 0, m, ans;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &m, &ans);
		sum = 0;
		for (int j = 1; j <= m; j++)
		{
			sum += j;
		}
		if (ans = sum)
			printf("Yes\n");
		else
			printf("No\n");
	}

	//���� Ǯ��
	cin >> n;

	int question[10], answer[10];

	for (int i = 0; i < n; i++)
	{
		cin >> question[i];
		cin >> answer[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (question[i] * (1 + question[i]) / 2 == answer[i])
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}