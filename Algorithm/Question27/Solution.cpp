#include <iostream>

using namespace std;

//N!�� ǥ����
// - ������ N�� ���Ͽ� N!�� 1���� N������ ���� �ǹ��Ѵ�. �̴� N�� Ŀ���� ���� �ް��ϰ� Ŀ����.
//	 �̷��� ū ���� ǥ���ϴ� ������� �Ҽ����� ������ ǥ���Ͽ� ����Ͻÿ�.

int main(int argc, char* argv[])
{
	//ù �ٿ� �ڿ��� N(3<=N<=1000)�� �Էµȴ�.

	int n;

	cin >> n;

	bool primeNumber;

	int count, temp;

	cout << n << "! =";

	for (int i = 2; i <= n; i++)
	{
		count = 0;
		primeNumber = true;

		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				primeNumber = false;
				break;
			}
		}

		if (primeNumber)
		{
			for (int k = 2; k <= n; k++)
			{
				temp = k;
				while (temp % i==0)
				{
					temp /= i;
					count++;
				}
			}

			cout << " " << count;
		}
		else
			continue;
	}

	return 0;
}