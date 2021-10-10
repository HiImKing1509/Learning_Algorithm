/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<int>a(n);

	int min = 101;
	int max = 0;
	int vt_min = -1;
	int vt_max = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
			vt_max = i;
		}
		if (a[i] <= min)
		{
			min = a[i];
			vt_min = i;
		}
	}
	if (vt_max < vt_min)
		cout << vt_max + n - 1 - vt_min;
	else
	{
		int sw = vt_max - vt_min;
		vt_max = vt_min;
		vt_min = vt_max + 1;
		cout << vt_max + n - 1 - vt_min + sw;
	}
	return 0;
}
