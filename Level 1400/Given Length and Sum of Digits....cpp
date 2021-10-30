/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

#define MAX 100
#define MIN -1
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int lenght, sum;
	cin >> lenght >> sum;
	if ((sum == 0 && lenght != 1) || (9 * lenght < sum))
		cout << -1 << " " << -1;
	else if (sum == 0 && lenght == 1)
		cout << 0 << " " << 0;
	else
	{
		vector<int>a(lenght, 9);
		vector<int>b(lenght, 0);

		// Find MAX
		int sum_max = lenght * 9;
		int n = lenght;
		while (sum_max > sum)
		{
			if (a[n - 1] != 0)
			{
				a[n - 1]--;
				sum_max -= 1;
			}
			else
				n--;
		}

		//Find MIN
		b[0] = 1;
		int sum_min = 1;
		int k = lenght;
		while (sum_min < sum)
		{
			if (b[k - 1] != 9)
			{
				b[k - 1]++;
				sum_min += 1;
			}
			else
				k--;
		}

		for (int i = 0; i < lenght; i++)
			cout << b[i];
		cout << " ";
		for (int i = 0; i < lenght; i++)
			cout << a[i];
	}
	return 0;
}
