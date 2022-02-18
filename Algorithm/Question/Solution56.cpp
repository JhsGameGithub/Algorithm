#include <iostream>

using namespace std;

void print(int n)
{
	if (n > 1)
		print(n - 1);

	cout << n << " ";
}

//재귀함수 분석
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	print(n);

	return 0;
}