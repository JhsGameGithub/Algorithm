#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
//¿Ã¹Ù¸¥ °ýÈ£(stack)
int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	vector<int> Atrain(n);
	vector<char> answer(n * 2);

	for (int i = 0; i < n; i++)
		cin >> Atrain[i];

	stack<int> cross;

	int number = 1, count = n, index = 0;


	for (int i = 0; i < n; i++)
	{
		cross.push(Atrain[i]);
		answer[index++] = 'P';
		while (!cross.empty() && cross.top() == number)
		{
			cross.pop();
			answer[index++] = 'O';
			count--;
			number++;
		}
	}

	if (count == 0)
		for (int i = 0; i < index; i++)
			cout << answer[i];
	else
		cout << "impossible";

	return 0;
}