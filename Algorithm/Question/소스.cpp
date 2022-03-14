#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char argv[])
{
	int n;

	cin >> n;

	vector<int> sequence(n);

	for (int i = 0; i < n; i++)
		cin >> sequence[i];

	vector<int> dy(n);
	
	int number, max = 0;
	
	dy[0] = 1;

	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			number = 1;
			if (sequence[i] > sequence[j])
				number += dy[j];
			dy[i] = dy[i] > number ? dy[i] : number;
			max = dy[i] > max ? dy[i] : max;
		}
	}

	cout << max;

	return 0;
}