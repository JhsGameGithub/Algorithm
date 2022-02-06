#include <iostream>

using namespace std;

//탄화수소 질량
// - 탄소(C)와 수소(H)로만 이루어진 화합물을 탄화수소라고 합니다.
//	 탄소(C) 한 개의 질량은 12g, 수소(H) 한 개의 질량은 1g입니다.
//	 에틸렌(C2H4)의 질량은 12 * 2 + 1 * 4 = 28g입니다.
//	 메탄(CH4)의 질량은 12 * 1 + 1 * 4 = 16g입니다.
//	 탄화수소식이 주어지면 해당 화합물의 질량을 구하는 프로그램을 작성하세요.

int main(int argc, char* argv[])
{
	//첫 줄에 탄화수소식이 주어집니다. 식의 형태는 CaHb 형태이며 (1<=a, b<=100)이다.
	//단 a 나 b 가 1이면 숫자가 식에 입력되지 않는다.예) CH4

	int index, hydro = 0, carbon = 0;

	char hydrocarbon[9];

	cin >> hydrocarbon;

	//C의 질량
	for (index = 1; hydrocarbon[index] != 'H'; index++)
		carbon = carbon * 10 + hydrocarbon[index] - 48;

	if (!carbon)
		carbon = 1;

	//H의 질량
	for (index = index + 1; hydrocarbon[index] != '\0'; index++)
		hydro = hydro * 10 + hydrocarbon[index] - 48;

	if (!hydro)
		hydro = 1;

	cout << carbon * 12 + hydro;

	// 강의 풀이와 크게 다르지 않습니다.

	return 0;
}