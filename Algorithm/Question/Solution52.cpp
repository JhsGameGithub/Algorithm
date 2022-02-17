#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//Ugly Numbers
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	int* ugly = new int[n];

	ugly[0] = 1;

	int pointer[3] = { 0,0,0 };
	int numbers[3] = { 2,3,5 };

	int min, index;

	for (int i = 1; i < n; i++)
	{
		min = ugly[pointer[0]] * numbers[0];
		index = 0;

		for (int j = 1; j < 3; j++)
		{
			if (ugly[pointer[j]] * numbers[j] < min)
			{
				min = ugly[pointer[j]] * numbers[j];
				index = j;
			}
			else if (ugly[pointer[j]] * numbers[j] == min)
				pointer[j]++;
		}
		pointer[index]++;
		ugly[i] = min;
	}

	cout << ugly[n - 1];

	delete[] ugly;

	//도무지 어떻게 해야할지 생각나지 않아서
	//강의 설명을 듣고 풀었습니다.
	
	return 0;
}