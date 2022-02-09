#include <iostream>

using namespace std;

int main(int argc, char argv[])
{
	int n;

	cin >> n;

	int* bubble = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> bubble[i];
	}

	int tmp;

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (bubble[j] > bubble[j + 1])
			{
				tmp = bubble[j];
				bubble[j] = bubble[j + 1];
				bubble [j + 1]= tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << bubble[i] << " ";
	}

	return 0;
}