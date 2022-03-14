#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//인접행렬
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	vector<int> dy(n);

	dy[0] = 1;
	dy[1] = 2;

	for (int i = 2; i < n; i++)
		dy[i] = dy[i - 1] + dy[i - 2];

	cout << dy[n - 1];

	return 0;
}