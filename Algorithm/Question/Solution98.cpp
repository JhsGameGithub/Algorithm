#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	vector<pair<int, int>> question;

	int score, time;

	for (int i = 0; i < n; i++)
	{
		cin >> score >> time;
		question.push_back({ score,time });
	}

	vector<int> dy[1001];

	int tmp;

	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			dy[j].push_back(0);

	for (int i = 0; i < question.size(); i++)
	{
		for (int j = question[i].second; j <= m; j++)
		{
			tmp = dy[j - question[i].second][i] + question[i].first;
			dy[j][i + 1] = tmp > dy[j][i] ? tmp : dy[j][i];
		}
	}

	cout << dy[m][n];


	return 0;
}