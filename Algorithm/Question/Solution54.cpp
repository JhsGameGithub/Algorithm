#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
//¿Ã¹Ù¸¥ °ýÈ£(stack)
int main(int argc, char* argv[])
{
	char c[31];
	stack<int> correct;
	cin >> c;

	for (int i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '(')
			correct.push(1);
		else if (!correct.empty())
			correct.pop();
		else 
		{
			cout << "NO";
			return 0;
		}
	}

	if (!correct.empty())
	{
		cout << "NO";
		return 0;
	}


	cout << "YES";
	return 0;
}