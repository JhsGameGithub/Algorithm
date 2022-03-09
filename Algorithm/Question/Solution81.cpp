#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//벨만포드 알고리즘
struct Edge
{
	int start, finish, weight;

	Edge(int s,int f, int w)
	{
		start = s;
		finish = f;
		weight = w;
	}
	bool operator<(const Edge e)const
	{
		return weight < e.weight;
	}
};

int main(int argc, char argv[])
{

	int n, m;

	cin >> n >> m;

	int a, b, c;

	vector<Edge> data;

	int sum = 0;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		data.push_back(Edge(a - 1, b - 1, c));
		sum += c < 0 ? -c : c;
	}

	sum++;

	int start, finish, min;

	cin >> start >> finish;

	int bellman[200];

	for (int i = 0; i < n; i++)
		bellman[i] = sum;

	bellman[start - 1] = 0;
	int s, f, w;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < data.size(); j++)
		{
			s = data[j].start;
			f = data[j].finish;
			w = data[j].weight;
			if (bellman[s] != sum && bellman[s] + w < bellman[f])
				bellman[f] = bellman[s] + w;
		}
	}

	for (int j = 0; j < data.size(); j++)
	{
		s = data[j].start;
		f = data[j].finish;
		w = data[j].weight;
		if (bellman[s] != sum && bellman[s] + w < bellman[f])
		{
			cout << "-1";
			return 0;
		}
	}
	cout << bellman[finish - 1];

	return 0;
}