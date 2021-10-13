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

#define MAX 100000
#define MIN -4294967295
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
	{
		int n;
		cin >> n;
		vector<int>a(n);

		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());

		int lc = MAX;
		for (int i = 0; i < n - 1; i++)
		{
			int minA = a[i + 1] - a[i];
			if (minA < lc)
				lc = minA;
		}
		cout << lc;
		cout << "\n";
	}
	return 0;
}
