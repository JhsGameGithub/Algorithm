#include <iostream>
#include <vector>

using namespace std;

int n, maxSeq, minSeq;
int sequence[10];
int math[4] = { 0, };

void DFS(int x,int sum)
{
	if (x == n - 1)
	{
		maxSeq = maxSeq < sum || maxSeq == 0 ? sum : maxSeq;
		minSeq = sum < minSeq || minSeq == 0 ? sum : minSeq;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (math[i] != 0)
		{
			math[i]--;
			switch (i)
			{
			case 0:
				DFS(x + 1, sum + sequence[x + 1]);
				break;
			case 1:
				DFS(x + 1, sum - sequence[x + 1]);
				break;
			case 2:
				DFS(x + 1, sum * sequence[x + 1]);
				break;
			case 3:
				DFS(x + 1, sum / sequence[x + 1]);
				break;
			default:
				break;
			}
			math[i]++;
		}
	}
}

int main(int argc, char argv[])
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> sequence[i];

	for (int i = 0; i < 4; i++)
		cin >> math[i];

	maxSeq = 0;
	minSeq = 0;

	DFS(0, sequence[0]);

	cout << maxSeq << endl << minSeq;

	return 0;
}