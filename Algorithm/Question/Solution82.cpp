#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n, r, cnt = 0;

bool ch[15] = { 0, };

int order[15] = { 0, };

vector<int> sequence(15);

void DFS(int number)
{
	if (number == r)
	{
		cnt++;
		for (int i = 0; i < r; i++)
			cout << order[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!ch[sequence[i]])
		{
			ch[sequence[i]] = true;
			order[number] = sequence[i] + 1;
			DFS(number + 1);
			ch[sequence[i]] = false;
		}
	}
}

int main(int argc, char argv[])
{
	cin >> n >> r;

	int tmp;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		sequence[i] = tmp - 1;
	}

	DFS(0);

	cout << cnt;

	return 0;
}