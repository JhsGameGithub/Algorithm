#include <iostream>

using namespace std;

void BinaryTree(int x)
{
	if (x > 7)
		return;
	//������ȸ
	//cout << x << " ";
	BinaryTree(x * 2);
	//������ȸ
	//cout << x << " ";
	BinaryTree(x * 2 + 1);
	//������ȸ
	//cout << x << " ";
}

//����Ʈ�� ���̿켱Ž��(DFS)
int main(int argc, char* argv[])
{
	BinaryTree(1);

	return 0;
}