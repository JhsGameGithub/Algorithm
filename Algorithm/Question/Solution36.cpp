#include <iostream>

using namespace std;
//»ğÀÔÁ¤·Ä
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int* insertion = new int[n];

	for (int i = 0; i < n; i++)
		cin >> insertion[i];

	int key, index;
	for (int i = 1; i < n; i++)
	{
		key = insertion[i];
		for (index = i + 1; index >= 0 && insertion[index] > key; index--)
			insertion[index + 1] = insertion[index];
		insertion[index + 1] = key;
	}
	return 0;
}