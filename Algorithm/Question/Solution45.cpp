#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//공주 구하기
int main(int argc, char* argv[])
{
	int n, k;

	cin >> n >> k;
	
	bool* prince = new bool[n] {0, };

	int index = 0, princeNum = n, count = 0;

	while (princeNum != 1)
	{
		if (!prince[index % 8])
		{
			count++;
			if (count == k)
			{
				count = 0;
				princeNum--;
				prince[index % 8] = true;
			}
		}
		index++;
	}

	for (int i = 0; i < n; i++)
		if (!prince[i])
			cout << i + 1;

	return 0;
}