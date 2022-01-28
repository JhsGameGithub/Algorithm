#include <iostream>

using namespace std;

//연속 부분 증가수열
// - N개의 숫자가 나열된 수열 중 연속적으로 증가하는 부분 수열의 최대 길이 출력
int main(int argc, char* argv[])
{
	//조건1 = 자연수 갯수 N은 5 이상 100,000 이상, 첫 번째 줄 입력
	//조건2 = 100,000 이하의 자연수 N개가 주어짐, 두 번째 줄 입력

	int n, Current = 0, Before = 0, Continue = 0, Max = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Current;
		Continue = Current >= Before ? Continue + 1 : 1;
		Max = Continue > Max ? Continue : Max;
		Before = Current;
	}
	cout << Max;
	return 0;
}