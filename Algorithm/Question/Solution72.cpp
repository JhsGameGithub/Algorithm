#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	int n, k, index = 0;

	cin >> n >> k;
	queue<int> prince;

	for (int i = 1; i <= n; i++)
		prince.push(i);

	while (prince.size() != 1)
	{
		for (int i = 0; i < k; i++)
		{
			if (i != k - 1)
				prince.push(prince.front());
			prince.pop();
		}
	}

	cout << prince.front();

	return 0;
}
