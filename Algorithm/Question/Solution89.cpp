#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Tomato
{
	int xPos, yPos, day;

	Tomato(int x, int y, int d)
	{
		xPos = x;
		yPos = y;
		day = d;
	}
};

int main(int argc, char argv[])
{
	int m, n;
	
	cin >> m >> n;

	int** map = new int* [n];
	for (int i = 0; i < n; i++)
		map[i] = new int[m];

	queue<Tomato> Q;

	int blank = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1)
				Q.push(Tomato(i, j, 0));
			else if (map[i][j] == -1)
				blank++;
		}
	}

	int xDir[4] = { 1,-1,0,0 };
	
	int yDir[4] = { 0,0,1,-1 };
	
	pair<int, int> tmp;
	
	int ripe = 0;

	int x, y;
	if (n * m - blank != Q.size())
	{
		while (!Q.empty())
		{
			tmp = { Q.front().xPos,Q.front().yPos };
			ripe = Q.front().day;
			Q.pop();
			for (int i = 0; i < 4; i++)
			{
				x = tmp.first + xDir[i];
				y = tmp.second + yDir[i];
				if (x != -1 && x != n && y != -1 && y != m)
				{
					if (map[x][y] == 0)
					{
						Q.push(Tomato(x, y, ripe + 1));
						map[x][y] = 1;
					}
				}
			}
		}
	}
	else
		cout << "0";

	bool allRipe = true;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 0)
			{
				allRipe = false;
				break;
			}
		}
		if (!allRipe)
			break;
	}

	if (allRipe)
		cout << ripe;
	else
		cout << "-1";

	for (int i = 0; i < n; i++)
		delete[] map[i];
	delete[] map;

	return 0;
}