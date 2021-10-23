
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

	int n, m;
	cin >> n >> m;
	vector<int>a(m);
	for (int i = 0; i < m; i++)
		cin >> a[i];

	sort(a.begin(), a.end());
	int lc = a[n - 1] - a[0];
	for (int i = 0; i <= m - n; i++)
		if ((a[i + n - 1] - a[i]) < lc)
			lc = a[i + n - 1] - a[i];
	cout << lc;
	return 0;
}
