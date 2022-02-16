#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//각 행의 평균과 가장 가까운 값
int main(int argc, char* argv[])
{
	int matrix[9], answer[9][2], sum, near, absolute;
	float average;

	for (int i = 0; i < 9; i++)
	{
		sum = 0;
		near = 101;
		for (int j = 0; j < 9; j++)
		{
			cin >> matrix[j];
			sum += matrix[j];
		}

		average = sum / 9.0f + 0.5f;
		
		answer[i][0] = (int)average;
	
		for (int j = 0; j < 9; j++)
		{
			absolute = answer[i][0] - matrix[j] < 0 ? matrix[j] - answer[i][0] : answer[i][0] - matrix[j];
			
			if (absolute < near) 
			{
				near = absolute;
				answer[i][1] = matrix[j];
			}
			else if (absolute == near)
				answer[i][1] = matrix[j] > answer[i][1] ? matrix[j] : answer[i][1];
		}
	}

	for (int i = 0; i < 9; i++)
		cout << answer[i][0] << " " << answer[i][1] << endl;

	return 0;
}