#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

//올바른 괄호
// -괄호가 입력되면 올바른 괄호이면 Yes, 올바르지 않으면 No를 출력
int main(int argc, char* argv[])
{
	//조건 == 문자열의 길이는 최대 30

	char a[30];
	int cnt = 0;
	scanf("%s", &a);


	//강의 풀이
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(')
			cnt++;
		else if (a[i] == ')')
			cnt--;

		if (cnt < 0)
			break;
	}

	if (cnt == 0)
		printf("Yes");
	else
		printf("No");


	//나의 풀이
	for (int i = 0; a[i] != '\0'; i++)
	{
		//가독성 문제로 아래 수식은 쓰지 않음
		//cnt = a[i] == '(' ? cnt + 1 : a[i] == ')' ? cnt - 1 : cnt;

		cnt = a[i] == '(' ? cnt + 1 : cnt;
		cnt = a[i] == ')' ? cnt - 1 : cnt;

		if (cnt < 0)
			break;
	}

	if (cnt == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}