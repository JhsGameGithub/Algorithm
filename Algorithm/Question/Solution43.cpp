#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//뮤직비디오(이분검색 응용)
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

	while (--m != 0)
	{
		tmp /= 2;
		index += tmp;
	}

	int min = 0;

	for (int i = index; i < n; i++)
		min += binary[i];

	cout << min;

	return 0;
}