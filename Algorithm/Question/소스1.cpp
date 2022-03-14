#include <iostream>
#include <vector>

using namespace std;
struct Brick
{
	int extent, height, weight;

	Brick(int e, int h, int w)
	{
		extent = e;
		height = h;
		weight = w;
	}
};

int main(int argc, char argv[])
{
	int n;
	
	cin >> n;

	vector<Brick> tower;
	
	int a, b, c;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		tower.push_back(Brick(a, b, c));
	}

	vector<int> dy(n);

	dy[0] = tower[0].height;
	int tmp, max = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			tmp = tower[i].height;
			if (tower[i].extent < tower[j].extent && tower[i].weight < tower[j].weight)
				tmp += dy[j];
			dy[i] = dy[i] > tmp ? dy[i] : tmp;
			max = dy[i] > max ? dy[i] : max;
		}
	}
	cout << max;
	return 0;
}