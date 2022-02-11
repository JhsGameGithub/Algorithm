#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//이분 검색
int main(int argc, char* argv[])
{
	int n, m;

	cin >> n >> m;

	vector<int> binary(n);

	for (int i = 0; i < n; i++)
		cin >> binary[i];

	sort(binary.begin(), binary.end());

	for (int i = 0; i < n; i++)
		cout << binary[i] << endl;

	int index = n % 2 == 0 ? n / 2 : n / 2 + 1;

	while (binary[index] != m)
		index = m < binary[index] ? index - index / 2 : index + index / 2;

	cout << index + 1;

	return 0;
}