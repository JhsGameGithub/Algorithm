#include <iostream>

using namespace std;
//Inversion Sequence)
// - n�� 1���� n������ ���� ����Ͽ� �̷���� ������ inversion sequence�� �־����� ��, ������
//	 ������ ����ϴ� ���α׷��� �ۼ��ϼ���.

int main(int argc, char* argv[])
{
	//ù ��° �ٿ� �ڿ��� N(3<=N<100)�� �־�����, �� ��° �ٿ��� inversion sequence�� ���� 
	//���̿� �� ĭ�� ������ �ΰ� �־�����.
	int n;

	cin >> n;
	int* order = new int[n] {0, };

	for (int i = 0; i < n; i++)
		cin >> order[i];

	int* inversion = new int[n] {0, };

	int index = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = index; j > order[i]; j--)
			inversion[j] = inversion[j - 1];
		inversion[order[i]] = i + 1;
		index++;
	}

	for (int i = 0; i < n; i++)
		cout << inversion[i] << " ";
	
	return 0;
}