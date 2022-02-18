#include <iostream>

using namespace std;

void BinaryPrint(int x)
{
	if (x == 0)
		return;
	BinaryPrint(x / 2);
	cout << x % 2;
}

//재귀함수 이진수 출력
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	BinaryPrint(n);

	return 0;
}