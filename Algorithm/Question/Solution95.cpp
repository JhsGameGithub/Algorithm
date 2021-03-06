#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int map[20][20];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	int dy[20][20];
	dy[0][0] = map[0][0];
	for (int i = 1; i < n; i++)
	{
		dy[0][i] = dy[0][i - 1] + map[0][i];
	}
	for (int i = 1; i < n; i++)
	{
		dy[i][0] = dy[i - 1][0] + map[i][0];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			dy[i][j] = dy[i - 1][j] < dy[i][j - 1] ? dy[i - 1][j] + map[i][j] : dy[i][j - 1] + map[i][j];
		}
	}

	cout << dy[n - 1][n - 1];
}