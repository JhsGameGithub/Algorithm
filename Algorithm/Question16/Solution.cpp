#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

//아나그램
// -두 문자열의 알파벳 구성이 일치하면 Yes, 일치하지 않으면 No를 출력
int main(int argc, char* argv[])
{
	//조건1 == 단어의 길이는 100이 넘어가지 않는다.

	//강의 풀이
	int c[60], d[60];
	char str[100];

	cin >> str;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			c[str[i] - 64]++;
		}
		else
			c[str[i] - 70]++;
	}

	cin >> str;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			d[str[i] - 65]++;
		}
		else
			d[str[i] - 70]++;
	}
	for (int i = 1; i <= 52; i++)
	{
		if (c[i] != d[i])
		{
			cout << "No\n";
			exit(0);
		}
	}
	printf("Yes\n");


	char a[101], b[101];

	cin >> a;
	cin >> b;

	//나의 풀이1(강의를 보기 전)
	bool answer = true;

	for (int i = 0; a[i] != '\0'; i++)
	{
		for (int j = 0; b[j] != '\0'; j++)
		{
			if (a[i] == b[j])
				b[j] = ' ';
		}
	}

	for (int i = 0; b[i] != '\0'; i++)
	{
		answer = b[i] != ' ' ? false : true;
	}

	if (answer)
		cout << "Yes";
	else
		cout << "No";

	//나의 풀이2(강의를 보고난 후)
	int upper_case[26] = { 0, };
	int lower_case[26] = { 0, };

	char str2[101];

	cin >> str2;

	for (int i = 0; str2[i] != '\0'; i++)
	{
		if (str2[i] > 64 && str2[i] < 91)
			upper_case[str2[i] - 65]++;
		else if (str2[i] > 96 && str2[i] < 123)
			upper_case[str2[i] - 97]++;
	}

	cin >> str2;

	for (int i = 0; str2[i] != '\0'; i++)
	{
		if (str2[i] > 64 && str2[i] < 91)
			upper_case[str2[i] - 65]--;
		else if (str2[i] > 96 && str2[i] < 123)
			upper_case[str2[i] - 97]--;
	}

	for (int i = 0; i < 26; i++)
	{
		if (upper_case[i] != 0 || lower_case[i] != 0)
		{
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";

	return 0;
}