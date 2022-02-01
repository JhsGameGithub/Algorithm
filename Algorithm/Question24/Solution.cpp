#include <iostream>

using namespace std;

//Jolly Jumper(������ ����)
// - N���� ������ �̷���� ������ ���� ���� ������ �ִ� �� ���� ���� 1���� N-1������ ���� 
//	 ��� ������ �� ������ ������ ����(jolly jumper)��� �θ���.���� ��� ������ ����
//	 �������� 1 4 2 3 �� �ڿ� �ִ� ���� ���� ���� ���� ���� 3, 2, 1�̹Ƿ� �� ������ ������ ���۰�
//	 �ȴ�.� ������ ������ �������� �Ǵ��� �� �ִ� ���α׷��� �ۼ�.
int main(int argc, char* argv[])
{
	//ù ��° �ٿ� �ڿ��� N(3 <= N <= 100)�� �־�����.
	//�� ���� �ٿ� N���� ������ �־�����.������ ũ��� int �� �����ȿ� ������, ������ �� ����
	//���� ������ ������ �ֽ��ϴ�.

	int n, index, current, previous;

	cin >> n;

	bool* sequence = new bool[n - 1]{ false, };

	cin >> previous;

	for (int i = 1; i < n; i++)
	{
		cin >> current;

		index = current - previous > 0 ? current - previous : previous - current;

		if (sequence[--index])
		{
			cout << "NO";
			return 0;
		}
		else
			sequence[index] = true;

		previous = current;
	}

	cout << "YES";
	return 0;

	//���ǿ����� int�� �迭�� ��� ������
	//���� bool�� �迭�� ����Ͽ� Ǯ�����ϴ�.
	//�ߺ��Ǵ� ���� ������ �������� �����߽��ϴ�.
}