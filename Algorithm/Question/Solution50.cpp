#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//영지 선택
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
		for (int j = 0; j <= w - territoryW; j++)
		{
			sum = 0;
			for (int n = 0; n < territoryH; n++)
				for (int m = 0; m < territoryW; m++)
					sum += matrix[i + n][j + m];
			max = sum > max ? sum : max;
		}
	}

	cout << max;

	for (int i = 0; i < h; i++)
		delete[] matrix[i];
	delete[] matrix;

	return 0;
}