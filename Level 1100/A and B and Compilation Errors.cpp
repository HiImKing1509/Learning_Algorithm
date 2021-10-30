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
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <list>
#include <map>

using namespace std;

#define MAX 1000000000
#define MIN -100000
#define ll long long


void SolveProblem()
{
	ll n;
	cin >> n;
	vector<ll>a(n);
	vector<ll>b(n - 1);
	vector<ll>c(n - 2);
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (ll i = 0; i < n - 1; i++)
		cin >> b[i];
	sort(b.begin(), b.end());
	ll flag1 = 0;
	for (ll i = 0; i < n - 1; i++)
	{
		if (flag1 == 0)
		{
			if (a[i] - b[i] != 0)
			{
				flag1 = a[i];
				break;
			}
		}
	}
	if (flag1 == 0)
		flag1 = a.back();
	for (ll i = 0; i < n - 2; i++)
		cin >> c[i];
	sort(c.begin(), c.end());
	ll flag2 = 0;
	for (ll i = 0; i < n - 2; i++)
	{
		if (flag2 == 0)
		{
			if (b[i] - c[i] != 0)
			{
				flag2 = b[i];
				break;
			}
		}
	}
	if (flag2 == 0)
		flag2 = b.back();
	cout << flag1 << "\n" << flag2;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	/*ll th;
	cin >> th;
	while (th--)*/
		SolveProblem();
	return 0;
}
