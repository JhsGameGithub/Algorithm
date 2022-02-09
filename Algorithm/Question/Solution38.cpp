#include <iostream>

using namespace std;
//Inversion Sequence)
// - n과 1부터 n까지의 수를 사용하여 이루어진 수열의 inversion sequence가 주어졌을 때, 원래의
//	 수열을 출력하는 프로그램을 작성하세요.

int main(int argc, char* argv[])
{
	//첫 번째 줄에 자연수 N(3<=N<100)이 주어지고, 두 번째 줄에는 inversion sequence가 숫자 
	//사이에 한 칸의 공백을 두고 주어진다.
	int n;

	cin >> n;
	int* order = new int[n] {0, };

	for (int i = 0; i < n; i++)
		cin >> order[i];

	int* inversion = new int[n] {0, };

	int index = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = index; j > order[i]; j--)
			inversion[j] = inversion[j - 1];
		inversion[order[i]] = i + 1;
		index++;
	}

	for (int i = 0; i < n; i++)
		cout << inversion[i] << " ";
	
	return 0;
}