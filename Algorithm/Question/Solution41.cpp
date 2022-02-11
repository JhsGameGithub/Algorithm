#include <iostream>

using namespace std;
//연속된 자연수의 합
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int a, b, count = 0, sum;

	for (int i = 2; i * (1 + i) / 2 <= n; i++)
	{
		a = 0;
		b = 0;
		sum = 0;
		for (int j = 1; sum < n; j++)
		{
			a = j;
			b = j + i - 1;
			sum = i * (a + b) / 2;
			if (sum == n)
			{
				cout << a;
				for (int k = a + 1; k <= b; k++)
					cout << " + " << k;
				cout << " = " << n << "\n";
				count++;
			}
		}
	}

	//강의에서는 다른풀이로, n+1 ~ n+a 를 이용해 풀었습니다.
	//저는 수열의 합을 이용해 풀었지만, 강의 풀이가 더 효율적이였습니다.
	
	cout << count;

	return 0;
}