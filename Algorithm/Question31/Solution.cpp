#include <iostream>

using namespace std;

//źȭ���� ����
// - ź��(C)�� ����(H)�θ� �̷���� ȭ�չ��� źȭ���Ҷ�� �մϴ�.
//	 ź��(C) �� ���� ������ 12g, ����(H) �� ���� ������ 1g�Դϴ�.
//	 ��ƿ��(C2H4)�� ������ 12 * 2 + 1 * 4 = 28g�Դϴ�.
//	 ��ź(CH4)�� ������ 12 * 1 + 1 * 4 = 16g�Դϴ�.
//	 źȭ���ҽ��� �־����� �ش� ȭ�չ��� ������ ���ϴ� ���α׷��� �ۼ��ϼ���.

int main(int argc, char* argv[])
{
	//ù �ٿ� źȭ���ҽ��� �־����ϴ�. ���� ���´� CaHb �����̸� (1<=a, b<=100)�̴�.
	//�� a �� b �� 1�̸� ���ڰ� �Ŀ� �Էµ��� �ʴ´�.��) CH4

	int index, hydro = 0, carbon = 0;

	char hydrocarbon[9];

	cin >> hydrocarbon;

	//C�� ����
	for (index = 1; hydrocarbon[index] != 'H'; index++)
		carbon = carbon * 10 + hydrocarbon[index] - 48;

	if (!carbon)
		carbon = 1;

	//H�� ����
	for (index = index + 1; hydrocarbon[index] != '\0'; index++)
		hydro = hydro * 10 + hydrocarbon[index] - 48;

	if (!hydro)
		hydro = 1;

	cout << carbon * 12 + hydro;

	// ���� Ǯ�̿� ũ�� �ٸ��� �ʽ��ϴ�.

	return 0;
}