#include <iostream>

using namespace std;

//���� �κ� ��������
// - N���� ���ڰ� ������ ���� �� ���������� �����ϴ� �κ� ������ �ִ� ���� ���
int main(int argc, char* argv[])
{
	//����1 = �ڿ��� ���� N�� 5 �̻� 100,000 �̻�, ù ��° �� �Է�
	//����2 = 100,000 ������ �ڿ��� N���� �־���, �� ��° �� �Է�

	int n, Current = 0, Before = 0, Continue = 0, Max = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Current;
		Continue = Current >= Before ? Continue + 1 : 1;
		Max = Continue > Max ? Continue : Max;
		Before = Current;
	}
	cout << Max;
	return 0;
}