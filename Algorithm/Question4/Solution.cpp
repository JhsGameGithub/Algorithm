#include <iostream>

using namespace std;

//���� ����
// -N���� ���̰� �Է� �Ǵµ�, �� �߿��� ���� �������̰� ���� ���� ���
int main(int argc, char* argv[])
{
	int n, a;

	//���� Ǯ��
	int max1 = -2147000000, min1 = 2147000000;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > max1)
			max1 = a;
		if (a < min1)
			min1 = a;
	}
	cout << max1 - min1;


	//���� Ǯ��
	//max�� min�� ù��° �Է°����� �ʱ�ȭ
	//���׿����ڸ� ���� ũ�� ������ �Ǻ�
	int max2, min2;

	cin >> n;

	cin >> a;
	max2 = a;
	min2 = a;

	for (int i = 2; i <= n; i++)
	{
		cin >> a;

		max2 = a > max2 ? a : max2;
		min2 = a < min2 ? a : min2;
	}
	cout << max2 - min2;
}