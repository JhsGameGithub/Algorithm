#include <iostream>

using namespace std;

//���� �κ� ��������
// - N���� ���ڰ� ������ ���� �� ���������� �����ϴ� �κ� ������ �ִ� ���� ���
int main(int argc, char* argv[])
{
	//����1 = �ڿ��� ���� N�� 5 �̻� 100,000 �̻�, ù ��° �� �Է�
	//����2 = 100,000 ������ �ڿ��� N���� �־���, �� ��° �� �Է�
	//����3 = �ԷµǴ� �ڿ������� 100 ������ ���ڵ�

	int n, Current = 0, Previous = 0, Continue = 0, Max = 0;

	cin >> n;

	cin >> Previous;

	for (int i = 1; i < n; i++)
	{
		cin >> Current;
		Continue = Current >= Previous ? Continue + 1 : 1;
		Max = Continue > Max ? Continue : Max;
		Previous = Current;
	}
	cout << Max;

	//���Ǹ� ���� ������ ����


	return 0;
}