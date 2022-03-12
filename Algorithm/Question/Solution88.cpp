#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Edge
{
	int start, finish, level;
	Edge(int s, int f, int l)
	{
		start = s;
		finish = f;
		level = l;
	}
};

int main(int argc, char argv[])
{
	bool map[7][7];
	queue<Edge> Q;

	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++)
			cin >> map[i][j];

	int xDir[4] = { 1,-1,0,0 };
	int yDir[4] = { 0,0,1,-1 };

	Q.push(Edge(0, 0, 0));

	pair<int, int> tmp;
	int L;

	int xPos, yPos;
	int min = 0;

	while (!Q.empty())
	{
		tmp = { Q.front().start,Q.front().finish };
		L = Q.front().level;
		Q.pop();
		if (map[tmp.first][tmp.second])
			continue;
		if (tmp.first == 6 && tmp.second == 6)
			min = L < min || min == 0 ? L : min;
		map[tmp.first][tmp.second] = true;
		for (int i = 0; i < 4; i++)
		{
			xPos = tmp.first + xDir[i];
			yPos = tmp.second + yDir[i];
			if (xPos != -1 && xPos != 7 && yPos != -1 && yPos != 7)
				Q.push(Edge(xPos, yPos, L + 1));
		}
	}

	cout << min;

	return 0;
}