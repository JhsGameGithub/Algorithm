#include <iostream>

using namespace std;

//석차 구하기
// - N명의 학생의 수학점수가 입력되면 각 학생의 석차를 입력된 순서대로 출력하는 프로그램을 
//	 작성하세요.
int main(int argc, char* argv[])
{
	//첫 줄에 N(1 <= N <= 100)이 입력되고, 두 번째 줄에 수학점수를 의미하는 N개의 정수가 입력된다.
	//같은 점수가 입력될 경우 높은 석차로 동일 처리한다.즉 가장 높은 점수가 92점인데 92점이
	//3명 존재하면 1등이 3명이고 그 다음 학생은 4등이 된다.점수는 100점 만점이다.

	int n;

	cin >> n;

	int* score = new int[n] {0, };
	int* number = new int[n];

	for (int i = 0; i < n; i++)
		cin >> score[i];

	for (int i = 0; i < n; i++)
	{
		number[i] = 1;
		for (int j = 0; j < n; j++)
			number[i] = score[i] < score[j] ? number[i] + 1 : number[i];
	}

	for (int i = 0; i < n; i++)
		cout << number[i] << " ";

	//강의 시청 후 특이사항 없음.

	return 0;
}