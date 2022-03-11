#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char argv[])
{
	int n;
	cin >> n;

	bool map[20][20];

	bool ch[20][20] = { 0, };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	queue<pair<int,int>> land;

	pair<int, int> tmp;

	int xDir[8] = { -1,0,1,1,1,0,-1,-1 };

	int yDir[8] = { -1,-1,-1,0,1,1,1,0 };

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] && !ch[i][j])
			{
				land.push({ i,j });
				while (!land.empty())
				{
					tmp = { land.front().first,land.front().second };
					land.pop();
					if (ch[tmp.first][tmp.second]|| !map[tmp.first][tmp.second])
						continue;
					ch[tmp.first][tmp.second] = true;
					for (int k = 0; k < 8; k++)
					{
						if (tmp.first + xDir[k] != -1 && tmp.first + xDir[k] != n &&
							tmp.second + yDir[k] != -1 && tmp.second + yDir[k] != n)
						{
							land.push({ tmp.first + xDir[k] ,tmp.second + yDir[k] });
						}
					}
				}
				count++;
			}
		}
	}
	
	cout << count;

	return 0;
}