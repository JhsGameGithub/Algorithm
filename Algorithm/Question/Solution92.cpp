#include <iostream>
#include <vector>

using namespace std;

int dy[46] = { 0, };

int DFS(int x)
{
	if (dy[x] > 0)
		return dy[x];
	if (x == 1 || x == 2)
		return x;
	else
		return dy[x] = DFS(x - 1) + DFS(x - 2);
}

int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	cout << DFS(7);

	return 0;
}