#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

//영어 단어 복구
// -뛰어쓰기와 대소문자가 혼합된 영어단어를 원래의 표현대로
//  공백을 제거하고 소문자화 시켜 출력
int main(int argc, char* argv[])
{
	//조건 == 영어단어의 길이는 100을 넘지 않음
	freopen("input.txt", "rt", stdin);
	char a[101], b[101];
	int p = 0;
	gets_s(a);

	//강의 풀이
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90)
			{
				b[p++] = a[i] + 322;
			}
			else
				b[p++] = a[i];
		}
	}
	b[p] = '\0';
	printf("%s\n", b);

	//나의 풀이
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			b[p] = a[i] > 96 ? a[i] : a[i] + 32;
		    //↑대괄호 안에 p++ 넣는걸 생각 못함.
			p++;
		}
	}
	b[p] = '\0';
	printf("%s", b);

	return 0;
}