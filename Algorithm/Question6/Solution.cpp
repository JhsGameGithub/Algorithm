#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

//숫자만 추출
// -문자와 숫자가 섞여있는 문자열이 주어지면 그 중 숫자만 추출하여
//  그 순서대로 자연수를 만들고, 그 자연수의 약수 개수와 자연수를 출력
int main(int argc, char* argv[])
{
	//조건 == 문자열의 길이는 50을 넘지 않음

	char a[100];
	int res = 0, cnt = 0;
	scanf("%s", &a);

	//강의 풀이
	for (int i = 0; a[i] != '\0'; i++)
		if (a[i] >= 48 && a[i] <= 57)
			res = res * 10 + (a[i] - 48);
	printf("%d\n", res);
	for (int i = 1; i <= res; i++)
		if (res % i == 0)
			cnt++;
	printf("%d\n", cnt);


	//나의 풀이
	
	//삼항연산자 활용 및 반복문 횟수 감축
	res = 0;
	for (int i = 0; a[i] != '\0'; i++)
		if (a[i] >= 48 && a[i] <= 57)
			res = res * 10 + (a[i] - 48);

	for (int i = 1; i < res / 2 + 1; i++)
		cnt = res % i == 0 ? cnt + 1 : cnt;

	printf("%d\n%d\n", res, cnt * 2);

	return 0;
}