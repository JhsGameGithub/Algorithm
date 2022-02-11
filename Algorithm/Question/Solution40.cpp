#include <iostream>

using namespace std;
//교집합(투포인터 알고리즘)
int main(int argc, char* argv[])
{
	int n1, n2;

	cin >> n1;

	int* first = new int[n1] {0, };

	for (int i = 0; i < n1; i++)
		cin >> first[i];

	cin >> n2;

	int* second = new int[n2];

	for (int i = 0; i < n2; i++)
		cin >> second[i];

	int* intersection = new int[n1 < n2 ? n1 : n2]{ 0, };

	int f = 0, s = 0, index;

	for (index = 0; f < n1 && s < n2;)
	{
		if (first[f] < second[s])
			f++;
		else if (first[f] > second[s])
			s++;
		else
		{
			intersection[index] = first[f];
			index++;
			f++;
			s++;
		}
	}

	for (int i = 0; i < index; i++)
		cout << intersection[i] << " ";

	return 0;
}