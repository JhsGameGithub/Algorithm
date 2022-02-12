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

	int tmp = n / 2;
	int index = tmp;

	while (binary[index] != m)
	{
		tmp /= 2;
		index = m < binary[index] ? index - tmp : index + tmp;
	}

	cout << index + 1;

	return 0;
}