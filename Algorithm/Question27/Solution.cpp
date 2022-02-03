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

	int* primeNumber = new int[n + 1]{ 0, };

	int tmp, index;

	for (int i = 2; i <= n; i++)
	{
		tmp = i;
		index = 2;
		while (tmp != 1)
		{
			if (tmp % index == 0)
			{
				tmp = tmp / index;
				primeNumber[index]++;
			}
			else
				index++;
		}
	}

	cout << n << "! =";
	for (int i = 2; i <= n; i++)
		if (primeNumber[i] != 0)
			cout << " " << primeNumber[i];

	//���� Ǯ�̴� 3�� �ݺ����� ������, ���� Ǯ�̴� 2�� �ݺ����� ����ϴ�.
	//���������� �޸𸮸� �Ʋ��� �ڵ带 ¥�ٺ��� 3�� �ݺ����� �� �� �ۿ� �������ϴ�.
	//�ӵ��� �� ������ �ϴ� �������� �ڵ带 ¥�� ������ �鿩�� �� �� �����ϴ�.

	return 0;
}