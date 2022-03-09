#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n, sum = 0, answer = 0;
vector<pair<int, int>> counseling(15);

void DFS(int s, int w)
{
	for (int i = s + w; i < n; i++)
	{
		if (i + counseling[i].first < n)
		{
			sum += counseling[i].second;
			DFS(i, counseling[i].first);
			sum -= counseling[i].second;
		}
		else
			answer = answer < sum ? sum : answer;
	}
}

int main(int argc, char argv[])
{
	int t, p;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t >> p;
		counseling[i] = { t,p };
	}

	DFS(0, 0);

	cout << answer;
	return 0;
}