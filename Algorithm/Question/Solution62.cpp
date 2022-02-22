#include <iostream>

using namespace std;

int sort[100], tmp[100];

void Merge(int lt,int rt)
{
	int mid;
	int Ap, Bp, Cp;
	if (lt < rt)
	{
		mid = (lt + rt) / 2;
		Merge(lt, mid);
		Merge(mid + 1, rt);
		Ap = lt - 1;
		Bp = mid;
		Cp = lt - 1;
		while (Ap < mid && Bp < rt)
		{
			if (sort[Ap] < sort[Bp])
				tmp[Cp++] = sort[Ap++];
			else
				tmp[Cp++] = sort[Bp++];
		}
		while (Ap < mid)
			tmp[Cp++] = sort[Ap++];
		while (Bp < rt)
			tmp[Cp++] = sort[Bp++];
		for (int i = lt - 1; i < rt; i++)
			sort[i] = tmp[i];
	}
}

//병합정렬
int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> sort[i];

	Merge(1, n);

	return 0;
}