#include <iostream>

using namespace std;
//연속된 자연수의 합[풀이]
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int tmp = n - 1, count = 0;

	for (int i = 2; tmp > 0; i++)
	{
		tmp -= i;
		if (tmp % i == 0)
		{
			for (int j = 1; j < i; j++)
				cout << (tmp / i) + j << " + ";
			cout << (tmp / i) + i << " = " << n << endl;
			count++;
		}
	}

	return 0;
}