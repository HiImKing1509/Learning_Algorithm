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
#include <list>
#include <iomanip>


using namespace std;

#define MAX 1000000000
#define MIN -1000000000
#define ll long long

void SolveProblem()
{
	ll n;
	cin >> n;
	vector<ll>a(n);
	ll lc = MIN;
	ll sum = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		if (a[i] > lc)
			lc = a[i];
	}
	sum -= lc;
	double ave = (double)sum / (n - 1);
	double res = (double)lc + ave;
	cout << fixed << setprecision(9) << res << "\n";
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
