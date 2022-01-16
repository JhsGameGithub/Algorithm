#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//�г� ������
// -�� �ٿ� ���� Ű ������ �־����� �޻�� ����� �þ߸� ���� ��û�� �Ұ����ϰ� �ϴ� �г������ڰ� �� �� �ִ��� ���ϱ�
int main(int argc, char* argv[])
{
	//����1 == ù �ٿ� �л��� 3 <= N <= 100
	//����2 == ��°�ٿ� Ű ���� �� �ڸ� �л����� ���ʴ�� �Է�
	
	int n;

	cin >> n;
	//���� Ǯ��
	int cnt = 0, h[101], max;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &h[i]);
	}
	max = h[n];
	for (int i = n - 1; i >= 1; i--)
	{
		if (h[i] > max)
		{
			max = h[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);

	//���� Ǯ��
	//�ʹ� 1���� ������ �����ؼ� �ڿ��� ����
	//�ݺ��� ���� ������ ���ϰ� 2�� �ݺ�����
	//����� ������ Ǯ����.
	int* student = new int[n];

	for (int i = 0; i < n; i++)
		cin >> student[i];

	int answer = 0, blocked = 0;

	for (int i = 0; i < n - 1; i++)
	{
		blocked = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (student[i] > student[j])
				blocked++;
			else
				break;
		}
		answer = blocked == n - i - 1 ? answer + 1 : answer;
	}

	cout << answer;

	delete[] student;
	return 0;
}