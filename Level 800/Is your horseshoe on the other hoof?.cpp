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

	vector<ll>a(4);
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a.begin(), a.end());
	int dem = 0;
	for (int i = 0; i < 3; i++)
	{
		if (a[i] != a[i + 1])
			dem++;
	}
	cout << 4 - dem - 1;
	return 0;
}
