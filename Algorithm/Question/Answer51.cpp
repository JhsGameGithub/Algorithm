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

	int sum = 0;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> sum;
			sum += i - 1 < 0 ? 0 : matrix[i - 1][j];
			sum += j - 1 < 0 ? 0 : matrix[i][j - 1];
			sum -= i - 1 < 0 || j - 1 < 0 ? 0 : matrix[i - 1][j - 1];
			matrix[i][j] = sum;
		}
	}

	int territoryH, territoryW;

	cin >> territoryH >> territoryW;

	int max = 0;

	for (int i = territoryH - 1; i < h; i++)
	{
		for (int j = territoryW - 1; j < w; j++)
		{
			sum = matrix[i][j];
			sum -= i - territoryH < 0 ? 0 : matrix[i - territoryH][j];
			sum -= j - territoryW < 0 ? 0 : matrix[i][j - territoryW];
			sum += i - territoryH < 0 || j - territoryW < 0 ? 0 : matrix[i - territoryH][j - territoryW];
			max = sum > max ? sum : max;
		}
	}

	cout << max;

	for (int i = 0; i < h; i++)
		delete[] matrix[i];
	delete[] matrix;

	//강의 코드를 보지않고, 설명만 듣고 코딩했음.

	return 0;
}