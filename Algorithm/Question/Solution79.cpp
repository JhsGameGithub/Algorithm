#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Road
{
	int  finish, tax;
	Road(int f, int t)
	{
		finish = f;
		tax = t;
	}
	bool operator<(const Road& r) const 
	{
		return tax > r.tax;
	}
};

//원더랜드(Prim MST 알고리즘 : priority_queue 활용)
int main(int argc, char* argv[])
{
	int v, e;

	cin >> v >> e;

	vector<Road> road_list[25];

	priority_queue<Road> road;
	
	int a, b, c;

	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> c;
		road_list[a - 1].push_back(Road(b - 1, c));
		road_list[b - 1].push_back(Road(a - 1, c));
	}

	road.push(Road(0, 0));

	pair<int, int> tmp;
	bool ch[25] = { 0, };
	int sum = 0;
	while (!road.empty())
	{
		tmp = { road.top().finish ,road.top().tax };
		road.pop();
		if (ch[tmp.first])
			continue;
		else
		{
			sum += tmp.second;
			ch[tmp.first] = true;
			for (int i = 0; i < road_list[tmp.first].size(); i++)
				if (!ch[road_list[tmp.first][i].finish])
					road.push(road_list[tmp.first][i]);
		}
	}
	cout << sum;

	return 0;
}
