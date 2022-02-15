#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//멀티태스킹(카카오 먹방 문제 변형)
int main(int argc, char* argv[])
{
	int n, k;

	cin >> n;

	vector<int> schedule(n);

	for (int i = 0; i < n; i++)
		cin >> schedule[i];

	cin >> k;

	int second = 0, index = 0;

	while (second != k)
	{
		if (schedule[index] != 0)
		{
			schedule[index]--;
			second++;
		}
		index = index == n - 1 ? 0 : index + 1;
	}

	for (int i = 0; i < n; i++)
	{
		if (schedule[(index + i) % n] != 0)
		{
			cout << (index + i) % n + 1;
			return 0;
		}
	}

	cout << "-1";
	return 0;
}