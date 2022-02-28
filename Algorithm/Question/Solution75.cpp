#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Schedule
{
	int money, day;
	Schedule(int m, int d)
	{
		money = m;
		day = d;
	}
	bool operator<(const Schedule& schedule) const
	{
		if (day != schedule.day)
			return day > schedule.day;
		else
			return money > schedule.money;
	}
};

//최대 수입 스케쥴
int main(int argc, char* argv[])
{
	int  n, m, d, sum = 0;
	priority_queue<int> heap;
	vector<Schedule> work;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m >> d;
		work.push_back(Schedule(m, d));
	}

	sort(work.begin(), work.end());

	int day = work[0].day, index = 0;

	while (day != 0)
	{
		while (index < work.size() && work[index].day == day)
		{
			heap.push(work[index].money);
			index++;
		}

		if (!heap.empty())
		{
			sum += heap.top();
			heap.pop();
		}

		day--;
	}

	cout << sum;

	return 0;
}
