#include <iostream>

using namespace std;

int main(int argc, char argv[])
{
	int n;

	cin >> n;

	int* special = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> special[i];
	}

	int tmp;

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (special[j] > 0 && special[j + 1] < 0)
			{
				tmp = special[j];
				special[j] = special[j + 1];
				special[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << special[i] << " ";
	}

	return 0;
}