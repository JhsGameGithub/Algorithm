#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//ºÀ¿ì¸®
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int** map = new int* [n + 2];
	for (int i = 0; i < n+2; i++)
		map[i] = new int[n + 2]{ 0, };


	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < n + 1; j++)
			cin >> map[i][j];

	int mountain = 0;

	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			if (map[i][j] > map[i][j + 1] &&
				map[i][j] > map[i][j - 1] &&
				map[i][j] > map[i + 1][j] &&
				map[i][j] > map[i - 1][j])
			{
				mountain++;
			}
		}
	}

	cout << mountain;

	for (int i = 0; i < n + 2; i++)
		delete[] map[i];
	delete[] map;

	return 0;
}