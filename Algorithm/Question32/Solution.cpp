#include <iostream>

using namespace std;
//��������
// - N���� ���ڰ� �ԷµǸ� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.
//	 �����ϴ� ����� ���������Դϴ�.

int main(int argc, char* argv[])
{
	//ù ��° �ٿ� �ڿ��� N(1<=N<=100)�� �־����ϴ�.
	//�� ��° �ٿ� N���� �ڿ����� ������ ���̿� �ΰ� �Էµ˴ϴ�.�� �ڿ����� ������ ���� �ȿ� �ֽ��ϴ�.

	int n;

	cin >> n;

	int* select = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> select[i];
	}

	int tmp, min, index;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = select[min] > select[j] ? j : min;

		if (min != i)
		{
			tmp = select[index];
			select[index] = select[i];
			select[i] = tmp;
		}
	}

	return 0;
}