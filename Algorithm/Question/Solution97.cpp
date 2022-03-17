#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int n, m;

	cin >> n;
	vector<int> coin(n);
	for (int i = 0; i < n; i++)
		cin >> coin[i];
	cin >> m;
	//합계,동전갯수
	vector<int> exchange(m + 1);
	int tmp;
	for (int i = 0; i < coin.size(); i++)
	{
		for (int j = coin[i]; j <= m; j++)
		{
			tmp = exchange[j - coin[i]] + 1;
			exchange[j] = tmp < exchange[j] || exchange[j] == 0 ? tmp : exchange[j];
		}
	}
	
	cout << exchange[m];

	return 0;
}