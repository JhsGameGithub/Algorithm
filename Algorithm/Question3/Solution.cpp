#include <iostream>

using namespace std;

//������� ��
//- �ڿ��� N�� �־����� �ڿ��� N�� ������� ���� ���İ� �Բ� ���
int main(int argc, char* argv[])
{
	//���� == 3 < N <= 100

	int n;
	int sum1 = 1;
	int sum2 = 1;

	cin >> n;

	//���� Ǯ��

	cout << sum1;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << " + " << i;
			sum1 += i;
		}
	}

	cout << " = " << sum1;

	cout << endl;

	//���� Ǯ��
	//��� ����� �ڱ� �ڽ��� �����ϰ� ���� ���Ͽ��� ����
	cout << sum2;
	
	for (int i = 2; i < (n / 2) + 1; i++)
	{
		if (n % i == 0)
		{
			cout << " + " << i;
			sum2 += i;
		}
	}

	cout << " = " << sum2;
}