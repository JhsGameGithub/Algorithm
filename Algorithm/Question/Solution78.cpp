#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Road
{
	int start, finish, tax;

	Road(int s, int f, int t)
	{
		start = s;
		finish = f;
		tax = t;
	}
	bool operator<(Road& r)
	{
		return tax < r.tax;
	}
};

vector<Road> road;

int unf[25];

int Find(int x)
{
	if (x == unf[x])
		return x;
	else
		return unf[x] = Find(unf[x]);
}

bool Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x != y)
	{
		unf[x] = y;
		return true;
	}
	return false;
}
//원더랜드(Kruskal MST 알고리즘 : Union&Find 활용)
int main(int argc, char* argv[])
{
	int v, e;

	cin >> v >> e;

	for (int i = 0; i < v; i++)
		unf[i] = i;

	int a, b, c;

	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> c;
		road.push_back(Road(a - 1, b - 1, c));
	}

	sort(road.begin(), road.end());

	int sum = 0;

	for (int i = 0; i < e; i++)
		if (Union(road[i].start, road[i].finish))
			sum += road[i].tax;

	cout << sum;

	return 0;
}
