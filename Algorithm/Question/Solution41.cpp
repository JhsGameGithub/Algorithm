#include <iostream>

using namespace std;
//���ӵ� �ڿ����� ��
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int a, b, count = 0, sum;

	for (int i = 2; i * (1 + i) / 2 <= n; i++)
	{
		a = 0;
		b = 0;
		sum = 0;
		for (int j = 1; sum < n; j++)
		{
			a = j;
			b = j + i - 1;
			sum = i * (a + b) / 2;
			if (sum == n)
			{
				cout << a;
				for (int k = a + 1; k <= b; k++)
					cout << " + " << k;
				cout << " = " << n << "\n";
				count++;
			}
		}
	}

	//���ǿ����� �ٸ�Ǯ�̷�, n+1 ~ n+a �� �̿��� Ǯ�����ϴ�.
	//���� ������ ���� �̿��� Ǯ������, ���� Ǯ�̰� �� ȿ�����̿����ϴ�.
	
	cout << count;

	return 0;
}