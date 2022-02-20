#include <iostream>

using namespace std;

int n, dfs[10], sumA, sumB;
bool answer = false, ch[10];

void DFS(int x)
{
	if (answer)
		return;
	if (x == n + 1)
	{
		sumA = 0;
		sumB = 0;
		for (int i = 0; i < n; i++)
		{
			if (ch[i])
				sumA += dfs[i];
			else
				sumB += dfs[i];
		}

		if (sumA == sumB)
			answer = true;
		return;
	}
	ch[x - 1] = true;
	DFS(x + 1);
	ch[x - 1] = false;
	DFS(x + 1);
}

//ÀÌÁøÆ®¸® ±íÀÌ¿ì¼±Å½»ö(DFS)
int main(int argc, char* argv[])
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> dfs[i];
	DFS(1);
	if (answer)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}