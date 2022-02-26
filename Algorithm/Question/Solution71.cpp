#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//°æ·Î Å½»ö(DFS)
int main(int argc, char* argv[])
{
	int s, e, x[3] = { 1,-1,5 }, tmp, index = 3, cnt = 0;

	cin >> s >> e;

	queue<int> jump;

	int ch[10000] = { 0, };

	jump.push(s);

	while (jump.front() != e)
	{
		tmp = jump.front();
		jump.pop();
		for (int i = 0; i < 3; i++)
		{
			if (tmp + x[i] > 0 && ch[tmp + x[i]] == 0)
			{
				jump.push(tmp + x[i]);
				ch[tmp + x[i]] = ch[tmp] + 1;
			}
		}
	}

	cout << ch[e];

	return 0;
}
