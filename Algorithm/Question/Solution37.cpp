#include <iostream>

using namespace std;
//Least Recently Used(카카오 캐시 문제 변형)
// - 캐시의 크기가 주어지고, 캐시가 비어있는 상태에서 N개의 작업을 CPU가 차례로 처리한다면 
//	 N개의 작업을 처리한 후 캐시메모리의 상태를 가장 최근 사용된 작업부터 차례대로 출력하는
//	 프로그램을 작성하세요.

int main(int argc, char* argv[])
{
	//첫 번째 줄에 캐시의 크기인 S(3<=S<=10)와 작업의 개수 N(5<=N<=1,000)이 입력된다.
	//두 번째 줄에 N개의 작업번호가 처리순으로 주어진다.작업번호는 1 ~100 이다.
	int s, n;

	cin >> s >> n;

	int* cache = new int[s] {0, };

	int work = 0, index = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> work;
		index = s - 1;
		for (int j = 0; j < s; j++)
		{
			if (cache[j] == work)
			{
				index = j;
				break;
			}
		}

		for (int j = index; j > 0; j--)
			cache[j] = cache[j - 1];
		cache[0] = work;
	}

	for (int i = 0; i < s; i++)
		cout << cache[i] << " ";
	return 0;
}