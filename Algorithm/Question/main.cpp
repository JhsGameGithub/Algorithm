#include <iostream>
#include "DynamicArray.h"

int main()
{
	DynamicArray<int> arr;

	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(6);

	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << std::endl;
}