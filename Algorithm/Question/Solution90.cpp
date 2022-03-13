#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>

using namespace std;

vector<Animal> rabit;

struct Animal
{
	int xPos, yPos, distance;
	Animal(int x, int y, int d)
	{
		xPos = x;
		yPos = y;
		distance = d;
	}
	bool operator<(const Animal& a) const
	{
		if (distance == a.distance)
		{
			if (xPos == a.xPos)
				return yPos > a.yPos;
			else
				return xPos > a.xPos;
		}
		else
			return distance > a.distance;
	}
};

int main(int argc, char argv[])
{
	int n;

	cin >> n;

	int map[25][25];

	Animal simba(0, 0, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 9)
			{
				simba = Animal(i, j, 0);
				map[i][j] = 0;
			}
		}
	}

	bool ch[25][25] = { 0, };

	priority_queue<Animal> feed;

	int simbaSize = 2;
	int exp = 0;

	pair<int, int> tmp;
	
	int dist, x, y, revenge = 0;

	int xDir[4] = { 1,-1,0,0 };
	int yDir[4] = { 0,0,1,-1 };


	feed.push(simba);

	while (!feed.empty())
	{
		tmp = { feed.top().xPos,feed.top().yPos };
		dist = feed.top().distance;
		feed.pop();
		if (map[tmp.first][tmp.second] > 0 && map[tmp.first][tmp.second] < simbaSize)
		{
			exp++;
			if (simbaSize == exp)
			{
				simbaSize++;
				exp = 0;
			}
			map[tmp.first][tmp.second] = 0;
			revenge = dist;
			feed = priority_queue<Animal>();
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					ch[i][j] = false;
		}
		for (int i = 0; i < 4; i++)
		{
			x = tmp.first + xDir[i];
			y = tmp.second + yDir[i];
			if (x > 0 || x < n || y > 0 || y < n || map[x][y]>simbaSize || ch[x][y])
				continue;
			feed.push(Animal(x, y, dist + 1));
		}
		ch[tmp.first][tmp.second] = true;
	}

	cout << revenge;

	return 0;
}