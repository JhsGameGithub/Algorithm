#include <iostream>
#include <vector>
#include <string>

using namespace std;

void DFS(int x)
{

}

//º¹¸é»ê
int main(int argc, char argv[])
{
	vector<char> t;
	bool alphabet[26] = { 0, };
	int code[26][10];
	string cryptarithms;
	int ten[3] = { 1,1,1 }, index = 0;

	cin >> cryptarithms;

	for (int i = 0; cryptarithms[i] != '\0'; i++)
	{
		if (cryptarithms[i] - 65 >= 0 && cryptarithms[i] - 65 < 26)
		{
			ten[index] *= 10;
			if (!alphabet[cryptarithms[i] - 65])
			{
				t.push_back(cryptarithms[i]);
				alphabet[cryptarithms[i] - 65] = true;
			}
		}
		else
			index++;
	}


	return 0;
}