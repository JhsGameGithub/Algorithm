#include <iostream>
#include <vector>
using namespace std;

int answer = 0, road = 0, n;

vector<pair<int, int>> map[20];

bool ch[20] = { 0, };

void DFS(int v)
{
	if (v == n - 1)
		answer = road < answer ? road : answer;
	else
	{
		for (int i = 0; i < map[v].size(); i++)
		{
			if (!ch[map[v][i].first])
			{
				ch[map[v][i].first] = true;
				road += map[v][i].second;
				DFS(map[v][i].first);
				ch[map[v][i].first] = false;
				road -= map[v][i].second;
			}
		}
	}
}

//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	int m, a, b, c;

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		map[a - 1].push_back({ b - 1,c });
		answer += c;
	}

	ch[0] = true;

	DFS(0);

	cout << answer;

	return 0;
}
