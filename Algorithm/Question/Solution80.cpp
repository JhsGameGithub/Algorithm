#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//다익스트라 알고리즘
struct Edge
{
	int vertex, weight;

	Edge(int v, int w)
	{
		vertex = v;
		weight = w;
	}
	bool operator<(const Edge e)const
	{
		return weight > e.weight;
	} 
};

int main(int argc, char argv[])
{

	int n, m;

	cin >> n >> m;

	int a, b, c;

	vector<Edge> data[20];


	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		data[a - 1].push_back(Edge(b - 1, c));
	}

	int distance[20] = { 0, };

	bool ch[20] = { 0, };
	
	int sum;
	pair<int, int> min;
	priority_queue<Edge> Q;

	Q.push(Edge(0, 0));

	while (!Q.empty())
	{
		min = { Q.top().vertex, Q.top().weight };
		Q.pop();
		if (ch[min.first])
			continue;
		ch[min.first] = true;
		distance[min.first] = min.second;

		for (int i = 0; i < data[min.first].size(); i++)
		{
			sum = distance[min.first] + data[min.first][i].weight;
			Q.push(Edge(data[min.first][i].vertex, sum));
		}
	}

	for (int i = 1; i < n; i++)
	{
		cout << i + 1 << " : ";
		if (distance[i])
			cout << distance[i] << endl;
		else
			cout << "impossible\n";
	}


	return 0;
}