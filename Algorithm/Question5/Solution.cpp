#include <iostream>

using namespace std;

//나이 계산
// -주민등록증 번호가 주어지면 주인의 나이와 성별을 판단하여 출력
int main(int argc, char* argv[])
{
	//조건 == 2019년을 기준으로 작성할 것

	char a[20];
	int year, age;

	//강의 풀이

	scanf("%s", &a);
	if (a[7] == '1' || a[7] == '2')
		year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else
		year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	age = 2019 - year + 1;
	printf("%d ", age);
	if (a[7] == '1' || a[7] == '3')
		printf("M\n");
	else
		printf("W\n");

	//나의 풀이
	
	//삼항연산자를 이용
	//char형 변수를 추가해서 printf를 한줄로 통합

	char gender;
	year = (a[0] - 48) * 10 + (a[1] - 48);
	age = 2019 - year + 1 - (a[7] - 48 < 3 ? 1900 : 2000);
	gender = a[7] - 48 % 2 == 1 ? 'M' : 'W';
	printf("%d %c\n", age, gender);

}