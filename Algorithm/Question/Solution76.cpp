#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//이항계수(메모이제이션)
int main(int argc, char* argv[])
{
	int n, r;

	cin >> n >> r;

	vector<int> answer(n);

	for (int i = 0; i < r; i++)
		answer[i]++;

	for (int i = 0; i < n - r; i++)
		answer[i]++;

	int numerator = 1, denominator = 1;

	for (int i = 1; i < n; i++)
	{
		if (answer[i] == 2)
			denominator *= i + 1;
		else if (answer[i] == 0)
			numerator *= i + 1;
	}

	cout << numerator / denominator;

	return 0;
}
