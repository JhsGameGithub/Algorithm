#include <iostream>

using namespace std;

//�ڿ����� ��
// -�ڿ��� A, B�� �־����� A���� B������ ���� ���İ� �Բ� ���
int main(int argc, char* argv[])
{
	int a, b;
	int sum1 = 0;
	int sum2 = 0;

	cin >> a >> b;

	//���� Ǯ��
	for (int i = a; i < b; i++)
	{
		cout << i << " + ";
		sum1 += i;
	}

	cout << b << " = " << sum1 + b;

	cout << endl;

	//���� Ǯ��
	//���������� �� ���� ���
	sum2 = ((a + b) * (b - a + 1)) / 2;

	for (int i = a; i < b; i++)
	{
		cout << i << " + ";
	}

	cout << b << " = " << sum2;
}