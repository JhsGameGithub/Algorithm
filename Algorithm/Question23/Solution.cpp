#include <iostream>

using namespace std;

//연속 부분 증가수열
// - N개의 숫자가 나열된 수열 중 연속적으로 증가하는 부분 수열의 최대 길이 출력
int main(int argc, char* argv[])
{
	//조건1 = 자연수 갯수 N은 5 이상 100,000 이상, 첫 번째 줄 입력
	//조건2 = 100,000 이하의 자연수 N개가 주어짐, 두 번째 줄 입력
	//조연3 = 입력되는 자연수들은 100 이하의 숫자들

	int n, Current = 0, Previous = 0, Continue = 0, Max = 0;

	cin >> n;

	cin >> Previous;

	for (int i = 1; i < n; i++)
	{
		cin >> Current;
		Continue = Current >= Previous ? Continue + 1 : 1;
		Max = Continue > Max ? Continue : Max;
		Previous = Current;
	}
	cout << Max;

	//강의를 보고 변수명 변경


	return 0;
}