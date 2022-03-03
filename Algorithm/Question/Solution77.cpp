#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> student[1000];

int goal;
bool answer = false;
bool ch[1000] = { 0, };
void DFS(int x)
{
	if (x == goal)
		answer = true;
	for (int i = 0; i < student[x].size(); i++)
	{
		if (!ch[student[x][i]])
		{
			ch[student[x][i]] = true;
			DFS(student[x][i]);
		}
	}
}

//이항계수(메모이제이션)
int main(int argc, char* argv[])
{
	int n, m;

	cin >> n >> m;

	int a, b;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		student[a - 1].push_back(b - 1);
		student[b - 1].push_back(a - 1);
	}
	
	cin >> a >> b;

	goal = b - 1;

	ch[a - 1] = true;

	DFS(a - 1);

	if (answer)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
