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

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> binary[i];
		sum += binary[i];
	}

	sort(binary.begin(), binary.end());

	int number = 0, dvd = m;

	int left = 1, right = sum, answer = 0;

	for (int mid = (left + right) / 2;
		right - left > 0;
		mid = (left + right) / 2)
	{
		dvd = m - 1;
		number = 0;
		for (int i = 0; i < n; i++)
		{
			number += binary[i];
			if(number>=mid)
			{
				number = number == mid ? 0 : binary[i];
				dvd--;
			}
		}

		if (dvd >= 0)
		{
			right = mid - 1;
			answer = mid;
		}
		else if (dvd < 0)
			left = mid + 1;
	}

	cout << answer;

	return 0;
}