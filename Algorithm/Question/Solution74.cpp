#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//ÃÖ¼Ò Èü
int main(int argc, char* argv[])
{
	priority_queue<int> heap;
	vector<int> answer;

	int n = 0;

	while (n != -1)
	{
		cin >> n;
		if (n > 0)
			heap.push(-n);
		else if (n == 0)
		{
			if (!heap.empty())
			{
				answer.push_back(-heap.top());
				heap.pop();
			}
			else
				answer.push_back(-1);
		}
	}

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << endl;

	return 0;
}
