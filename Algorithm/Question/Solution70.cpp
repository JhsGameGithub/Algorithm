#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	int n, m, a, b, x;
	bool next;
	bool ch[20] = { 0, };
	vector<int> map[20];
	queue<int> road;
	cin >> n >> m;
	vector<int> min(n);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		map[a - 1].push_back(b - 1);
	}

	road.push(0);
	ch[0] = 1;

	while (!road.empty())
	{
		x = road.front();
		road.pop();
		for (int i = 0; i < map[x].size(); i++)
		{
			if (!ch[map[x][i]])
			{
				ch[map[x][i]] = true;
				road.push(map[x][i]);
				min[map[x][i]] = min[x] + 1;
			}
		}
	}

	for (int i = 1; i < n; i++)
		cout << i + 1 << " : " << min[i] << endl;

	return 0;
}
