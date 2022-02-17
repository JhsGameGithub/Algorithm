#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//영지 선택(Large)
int main(int argc, char* argv[])
{
	int n, k;

	cin >> n >> k;

	vector<int> stack;
	int index = 0;

	while (n != 0)
	{
		stack.push_back(n % k);
		n /= k;
		index++;
	}

	if (k != 16)
		for (int i = index - 1; i >= 0; i--)
			cout << stack[i];
	else
	{
		for (int i = index - 1; i >= 0; i--) 
		{
			if (stack[i] > 9)
			{
				cout << (char)(stack[i] + 55);
				continue;
			}
			cout << stack[i];
		}
	}

	return 0;
}