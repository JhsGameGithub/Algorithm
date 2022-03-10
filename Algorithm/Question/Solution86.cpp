#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int n, m, answer = 0, absNumber, tmp, sum;

int ch[12] = { 0, };
vector<pair<int, int>> house;
vector<pair<int, int>> pizza;

void DFS(int s, int L)
{
	if (L == m)
	{
		sum = 0;
		for (int i = 0; i < house.size(); i++)
		{
			tmp = 0;
			for (int j = 0; j < m; j++)
			{
				absNumber= abs(house[i].first - pizza[ch[j]].first) + abs(house[i].second - pizza[ch[j]].second);

				tmp = absNumber < tmp || tmp == 0 ? absNumber : tmp;
			}
			sum += tmp;
		}
		answer = sum < answer || answer == 0 ? sum : answer;
	}
	else
	{
		for (int i = s; i < pizza.size(); i++)
		{
			ch[L] = i;
			DFS(i + 1, L + 1);
		}
	}
}

int main(int argc, char argv[])
{
	cin >> n >> m;
	//1 = 집
	//2 = 피자가게
	int who;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> who;
			if (who == 1)
				house.push_back({ i,j });
			else if (who == 2)
				pizza.push_back({ i,j });
		}
	}
	
	DFS(0, 0);

	cout << answer;

	return 0;
}