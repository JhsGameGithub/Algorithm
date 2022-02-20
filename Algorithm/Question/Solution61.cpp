#include <iostream>

using namespace std;

int n, m, dfs[10], sum, answer = 0;
int ch[10];

void DFS(int x)
{
	if (x == n + 1)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
			sum += ch[i];

		if (sum == m)
			answer++;
		return;
	}
	ch[x - 1] = dfs[x - 1];
	DFS(x + 1);
	ch[x - 1] = 0;
	DFS(x + 1);
	ch[x - 1] = -dfs[x - 1];
	DFS(x + 1);
}

//ÀÌÁøÆ®¸® ±íÀÌ¿ì¼±Å½»ö(DFS)
int main(int argc, char* argv[])
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> dfs[i];
	DFS(1);

	if (answer != 0)
		cout << answer;
	else
		cout << "-1";

	return 0;
}