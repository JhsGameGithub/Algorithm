#include <iostream>

using namespace std;

int n;
bool ch[10];

void DFS(int x)
{
	if (x == n + 1)
	{
		for (int i = 0; i < n; i++)
			if (ch[i])
				cout << i + 1 << " ";
		cout << endl;
	}
	else
	{
		ch[x - 1] = 1;
		DFS(x + 1);
		ch[x - 1] = 0;
		DFS(x + 1);
	}
}

//ÀÌÁøÆ®¸® ±íÀÌ¿ì¼±Å½»ö(DFS)
int main(int argc, char* argv[])
{
	cin >> n;
	DFS(1);
	return 0;
}