#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//블록의 최댓값
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[n] {0, };
	int* front = new int[n]; 
	int* right = new int[n];

	for (int i = 0; i < n; i++)
		cin >> front[i];

	for (int i = 0; i < n; i++)
		cin >> right[i];



	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			matrix[j][i] = front[i];
	
	int rightIndex = 0, sum = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			matrix[i][j] = matrix[i][j] > right[rightIndex] ? right[rightIndex] : matrix[i][j];
			sum += matrix[i][j];
		}
		rightIndex++;
	}

	cout << sum;

	delete[] front;
	delete[] right;
	for (int i = 0; i < n; i++)
		delete[] matrix[i];
	delete[] matrix;

	return 0;
}