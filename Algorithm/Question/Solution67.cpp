#include <iostream>
#include <vector>
using namespace std;

int answer = 0, road = 0, n;

int map[20][20];

bool ch[20];

void DFS(int v)
{
	if (v == n - 1)
		answer = road < answer ? road : answer;
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (map[v][i] != 0 && !ch[i])
			{
				ch[i] = true;
				road += map[v][i];
				DFS(i);
				ch[i] = false;
				road -= map[v][i];
			}
		}
	}
}

//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			map[i][j] = 0;

	int m, a, b, c;

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		map[a - 1][b - 1] = c;
		answer += c;
	}

	ch[0] = true;

	DFS(0);

	cout << answer;

	return 0;
}
