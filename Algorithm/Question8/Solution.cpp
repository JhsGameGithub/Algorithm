#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

//�ùٸ� ��ȣ
// -��ȣ�� �ԷµǸ� �ùٸ� ��ȣ�̸� Yes, �ùٸ��� ������ No�� ���
int main(int argc, char* argv[])
{
	//���� == ���ڿ��� ���̴� �ִ� 30

	char a[30];
	int cnt = 0;
	scanf("%s", &a);


	//���� Ǯ��
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(')
			cnt++;
		else if (a[i] == ')')
			cnt--;

		if (cnt < 0)
			break;
	}

	if (cnt == 0)
		printf("Yes");
	else
		printf("No");


	//���� Ǯ��
	for (int i = 0; a[i] != '\0'; i++)
	{
		//������ ������ �Ʒ� ������ ���� ����
		//cnt = a[i] == '(' ? cnt + 1 : a[i] == ')' ? cnt - 1 : cnt;

		cnt = a[i] == '(' ? cnt + 1 : cnt;
		cnt = a[i] == ')' ? cnt - 1 : cnt;

		if (cnt < 0)
			break;
	}

	if (cnt == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}