#include <iostream>

using namespace std;
//Least Recently Used(īī�� ĳ�� ���� ����)
// - ĳ���� ũ�Ⱑ �־�����, ĳ�ð� ����ִ� ���¿��� N���� �۾��� CPU�� ���ʷ� ó���Ѵٸ� 
//	 N���� �۾��� ó���� �� ĳ�ø޸��� ���¸� ���� �ֱ� ���� �۾����� ���ʴ�� ����ϴ�
//	 ���α׷��� �ۼ��ϼ���.

int main(int argc, char* argv[])
{
	//ù ��° �ٿ� ĳ���� ũ���� S(3<=S<=10)�� �۾��� ���� N(5<=N<=1,000)�� �Էµȴ�.
	//�� ��° �ٿ� N���� �۾���ȣ�� ó�������� �־�����.�۾���ȣ�� 1 ~100 �̴�.
	int s, n;

	cin >> s >> n;

	int* cache = new int[s] {0, };

	int work = 0, index = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> work;
		index = s - 1;
		for (int j = 0; j < s; j++)
		{
			if (cache[j] == work)
			{
				index = j;
				break;
			}
		}

		for (int j = index; j > 0; j--)
			cache[j] = cache[j - 1];
		cache[0] = work;
	}

	for (int i = 0; i < s; i++)
		cout << cache[i] << " ";
	return 0;
}