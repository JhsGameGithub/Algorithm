#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

//���� �ܾ� ����
// -�پ��� ��ҹ��ڰ� ȥ�յ� ����ܾ ������ ǥ�����
//  ������ �����ϰ� �ҹ���ȭ ���� ���
int main(int argc, char* argv[])
{
	//���� == ����ܾ��� ���̴� 100�� ���� ����
	freopen("input.txt", "rt", stdin);
	char a[101], b[101];
	int p = 0;
	gets_s(a);

	//���� Ǯ��
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90)
			{
				b[p++] = a[i] + 322;
			}
			else
				b[p++] = a[i];
		}
	}
	b[p] = '\0';
	printf("%s\n", b);

	//���� Ǯ��
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			b[p] = a[i] > 96 ? a[i] : a[i] + 32;
		    //����ȣ �ȿ� p++ �ִ°� ���� ����.
			p++;
		}
	}
	b[p] = '\0';
	printf("%s", b);

	return 0;
}