#include <iostream>

using namespace std;

//���� ���
// -�ֹε���� ��ȣ�� �־����� ������ ���̿� ������ �Ǵ��Ͽ� ���
int main(int argc, char* argv[])
{
	//���� == 2019���� �������� �ۼ��� ��

	char a[20];
	int year, age;

	//���� Ǯ��

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

	//���� Ǯ��
	
	//���׿����ڸ� �̿�
	//char�� ������ �߰��ؼ� printf�� ���ٷ� ����

	char gender;
	year = (a[0] - 48) * 10 + (a[1] - 48);
	age = 2019 - year + 1 - (a[7] - 48 < 3 ? 1900 : 2000);
	gender = a[7] - 48 % 2 == 1 ? 'M' : 'W';
	printf("%d %c\n", age, gender);

}