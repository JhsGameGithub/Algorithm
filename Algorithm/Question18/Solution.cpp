#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//��������
// -�������� �߻��� ����ġ M���� ������ N�� ���� �溸���� �︲. �ִ� �������� �溸���� �︰ �ð� ���
int main(int argc, char* argv[])
{
	//����1 == �ڿ��� N 10 <= N <= 100 �� M�� �Է�
	int n, m;

	//���� Ǯ��
	int val, cnt = 0, max2 = -2147000000;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		if (m > val)
			cnt++;
		else
			cnt = 0;
		if (cnt > max2)
			max2 = cnt;
	}
	if (max2 == 0)
		printf("-1\n");
	else
		printf("%d\n", max2);

	//���� Ǯ��
	int noise, max = -1, current = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> noise;

		current = noise > m ? current + 1 : 0;
		max = current > max ? current : max;
	}

	cout << max;

	return 0;
}