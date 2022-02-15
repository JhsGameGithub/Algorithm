#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//마구간 정하기(이분검색 응용)
int main(int argc, char* argv[])
{
	int n, c;

	cin >> n >> c;

	vector<int> x(n);


	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}

	int left = x[0], mid, right = x[n - 1], answer = 0, count, last;

	while (right >= left)
	{
		mid = (left + right) / 2;

		count = 1;
		last = x[0];
		for (int i = 1; i < n; i++)
		{
			if (x[i] - last >= mid)
			{
				count++;
				last = x[i];
			}
		}
		if (count < c)
			right = mid - 1;
		else if (count >= c)
		{
			left = mid + 1;
			answer = mid;
		}
	}

	cout << answer;

	return 0;
}