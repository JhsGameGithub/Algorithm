#include <iostream>

using namespace std;

//1���� N������ M�� ��� ��
int main(int argc, char* argv[])
{
	int n, m;
	int sum1 = 0;
	int sum2 = 0;

	cin >> n >> m;

	//���� Ǯ��
	for (int i = 1; i < n; i++)
		if (i % m == 0)
			sum1 += i;

	//���� Ǯ��
	//���������� �� ���� ���
	sum2 = (n / m * (m + n - n % m)) / 2;

	cout << sum1 << " " << sum2;
}