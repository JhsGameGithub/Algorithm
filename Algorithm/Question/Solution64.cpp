#include <iostream>

using namespace std;

int answer = 0;

int road[20] = { 0, }, index = 0;

bool mat[20][20];

void DFS(int begin, int end);

//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	int n, m;

	cin >> n >> m;


	int begin, end;

	for (int i = 0; i < m; i++)
	{
		cin >> begin >> end;

		mat[begin - 1][end - 1] = true;
	}

	DFS(1, n);

	cout << answer;

	return 0;
}

void DFS(int begin,int end)
{
	if (begin == end)
	{
		answer++;
		return;
	}
	road[index++] = begin;
	for (int i = 0; i < index - 1; i++)
	{
		if (road[i] == begin)
		{
			road[index--] = 0;
			return;
		}
	}
	for (int i = 0; i < end; i++)
		if (mat[begin - 1][i])
			DFS(i + 1, end);
	road[index--] = 0;
}