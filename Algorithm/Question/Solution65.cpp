#include <iostream>

using namespace std;

bool map[7][7] = { 0, };

int cnt = 0;

void DFS(int x, int y)
{
	if (x == 6 && y == 6)
		cnt++;
	else
	{
		if (x >= 0 && x <= 6 && y >= 0 && y <= 6)
		{
			if (!map[x][y])
			{
				map[x][y] = true; 
				DFS(x - 1, y);
				DFS(x, y - 1);
				DFS(x + 1, y);
				DFS(x, y + 1);
				map[x][y] = false;
			}
		}
	}
}

//¹Ì·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++)
			cin >> map[i][j];

	DFS(0, 0);

	cout << cnt;
	return 0;
}
