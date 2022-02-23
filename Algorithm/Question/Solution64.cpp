#include <iostream>

using namespace std;

int cnt = 0, n;

bool map[20][20], ch[20];

void DFS(int v)
{
	if (v == n - 1)
	{
		cnt++;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (map[v][i] && !ch[i])
			{
				ch[i] = true;
				DFS(i);
				ch[i] = false;
			}
		}
	}
}
//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	int m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		map[a - 1][b - 1] = true;
	}
	ch[0] = true;
	DFS(0);
	cout << cnt;
	return 0;
}
