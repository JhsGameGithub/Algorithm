#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

//���ڸ� ����
// -���ڿ� ���ڰ� �����ִ� ���ڿ��� �־����� �� �� ���ڸ� �����Ͽ�
//  �� ������� �ڿ����� �����, �� �ڿ����� ��� ������ �ڿ����� ���
int main(int argc, char* argv[])
{
	//���� == ���ڿ��� ���̴� 50�� ���� ����

	char a[100];
	int res = 0, cnt = 0;
	scanf("%s", &a);

	//���� Ǯ��
	for (int i = 0; a[i] != '\0'; i++)
		if (a[i] >= 48 && a[i] <= 57)
			res = res * 10 + (a[i] - 48);
	printf("%d\n", res);
	for (int i = 1; i <= res; i++)
		if (res % i == 0)
			cnt++;
	printf("%d\n", cnt);


	//���� Ǯ��
	
	//���׿����� Ȱ�� �� �ݺ��� Ƚ�� ����
	res = 0;
	for (int i = 0; a[i] != '\0'; i++)
		if (a[i] >= 48 && a[i] <= 57)
			res = res * 10 + (a[i] - 48);

	for (int i = 1; i < res / 2 + 1; i++)
		cnt = res % i == 0 ? cnt + 1 : cnt;

	printf("%d\n%d\n", res, cnt * 2);

	return 0;
}