#include <iostream>

using namespace std;

//인접행렬
int main(int argc, char* argv[])
{
	int n, m;

	cin >> n >> m;

	int** mat = new int* [n];
	for (int i = 0; i < n; i++)
		mat[i] = new int[n] {0, };

	int begin, end, tax;

	for (int i = 0; i < m; i++)
	{
		cin >> begin >> end >> tax;

		mat[begin - 1][end - 1] = tax;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] mat[i];
	delete[] mat;
	
	return 0;
}