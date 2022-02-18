#include <iostream>

using namespace std;

void BinaryTree(int x)
{
	if (x > 7)
		return;
	//전위순회
	//cout << x << " ";
	BinaryTree(x * 2);
	//중위순회
	//cout << x << " ";
	BinaryTree(x * 2 + 1);
	//후위순회
	//cout << x << " ";
}

//이진트리 깊이우선탐색(DFS)
int main(int argc, char* argv[])
{
	BinaryTree(1);

	return 0;
}