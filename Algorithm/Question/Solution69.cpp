#include <iostream>
#include <vector>
using namespace std;

int Q[100], front = -1, back = -1, ch[10];
vector<int> map[10];

//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	int a, b, x;

	for (int i = 0; i < 6; i++)
	{
		cin >> a >> b;
		map[a - 1].push_back(b - 1);
		map[b - 1].push_back(a - 1);
	}
	Q[++back] = 0;
	ch[0] = true;
	while(front < back)
	{
		x = Q[++front];
		cout << x + 1 << " ";
		for (int i = 0; i < map[x].size(); i++)
		{
			if (!ch[map[x][i]])
			{
				ch[map[x][i]] = true;
				Q[++back] = map[x][i];
			}
		}
	}

	return 0;
}
