#include <iostream>
#include <vector>

using namespace std;
//가방문제
int main(int argc, char* argv[])
{
	int n, l;

	cin >> n >> l;

	vector<pair<int, int>> jewel;

	int weight, value;

	for (int i = 0; i < n; i++)
	{
		cin >> weight >> value;

		jewel.push_back({ weight,value });
	}

	vector<int> bag(l + 1);

	int tmp;

	for (int i = 0; i < jewel.size(); i++)
	{
		for (int j = jewel[i].first; j <= l; j++)
		{
			tmp = bag[j - jewel[i].first] + jewel[i].second;
			bag[j] = tmp > bag[j] ? tmp : bag[j];
		}
	}

	cout << bag[l];

	return 0;
}