#include <iostream>

using namespace std;
//»ðÀÔÁ¤·Ä
int main(int argc, char* argv[])
{
	int n1, n2;

	cin >> n1;

	int* first = new int[n1] {0,};

	for (int i = 0; i < n1; i++)
		cin >> first[i];

	cin >> n2;

	int* second = new int[n2];

	for (int i = 0; i < n2; i++)
		cin >> second[i];

	int* merge = new int[n1 + n2]{ 0, };

	int f = 0, s = 0, index = 0;

	for (index = 0; f < n1 && s < n2; index++)
		merge[index] = first[f] <= second[s] ? first[f++] : second[s++];

	for (int i = index; i < n1 + n2; i++)
		merge[i] = f < n1 ? first[f++] : second[s++];

	for (int i = 0; i < n1 + n2; i++)
		cout << merge[i] << " ";

	return 0;
}