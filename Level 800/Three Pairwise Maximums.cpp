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
#include <set>
using namespace std;

#define MAX 1000000000
#define MIN -100000
#define ll long long

void SolveProblem()
{
	ll x, y, z;
	cin >> x >> y >> z;
	vector<int>a(3);
	bool flag = false;
	if (x == y && y == z)
	{
		flag = true;
		a[0] = a[1] = a[2] = x;
	}
	else if (x == y || y == z || x == z)
	{
		ll mi = min(x, y);
		mi = min(mi, z);
		ll m = max(x, y);
		m = max(m, z);
		int c = 0;
		if (x == m) c++;
		if (y == m) c++;
		if (z == m) c++;

		if (c == 2)
		{
			flag = true;
			a[0] = m;
			a[1] = mi;
			a[2] = 1;
		}
	}
	else
		flag = false;
	if (flag)
		cout << "YES\n" << a[0] << " " << a[1] << " " << a[2];
	else
		cout << "NO";
	cout << "\n";

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll th;
	cin >> th;
	while (th--)
		SolveProblem();
	return 0;
}
