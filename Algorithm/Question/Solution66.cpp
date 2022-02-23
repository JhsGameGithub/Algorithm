#include <iostream>
#include <vector>
using namespace std;

int cnt = 0, n;

vector<int> map[20];

bool ch[20];

void DFS(int v)
{
	if (v == n - 1)
	{
		cnt++;
	}
	else
	{
		for (int i = 0; i < map[v].size(); i++)
		{
			if (!ch[map[v][i]])
			{
				ch[map[v][i]] = true;
				DFS(map[v][i]);
				ch[map[v][i]] = false;
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
		map[a - 1].push_back(b - 1);
	}
	ch[0] = true;
	DFS(0);
	cout << cnt;
	return 0;
}
