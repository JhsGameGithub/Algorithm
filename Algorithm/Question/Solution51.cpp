#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//영지 선택(Large)
int main(int argc, char* argv[])
{
	int h, w;

	cin >> h >> w;

	int** matrix = new int* [h];
	for (int i = 0; i < h; i++)
		matrix[i] = new int[w] {0, };

	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			cin >> matrix[i][j];

	int territoryH, territoryW;

	cin >> territoryH >> territoryW;

	int sum = 0, max = 0;

	for (int i = 0; i <= h - territoryH; i++)
	{
		sum = 0;
		for (int j = 0; j < territoryH; j++)
			for (int k = 0; k < territoryW; k++)
				sum += matrix[i + j][k];
		max = sum > max ? sum : max;
		for (int j = 1; j <= w - territoryW; j++)
		{
			for (int k = 0; k < territoryH; k++)
			{
				sum -= matrix[i + k][j - 1];
				sum += matrix[i + k][j + territoryW - 1];
			}
			max = sum > max ? sum : max;
		}
	}

	cout << max;

	for (int i = 0; i < h; i++)
		delete[] matrix[i];
	delete[] matrix;

	return 0;
}