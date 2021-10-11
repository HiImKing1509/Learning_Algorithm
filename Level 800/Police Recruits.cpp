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

	ll n;
	cin >> n;
	vector<ll>a(n);
	ll toipham = 0;
	ll canhsat = 0;
	ll dem = 0;
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	for (ll i = 0; i < n; i++)
	{
		if (a[i] > 0)
			canhsat += a[i];
		else
		{
			toipham = 1;
			if (canhsat >= 1)
				canhsat -= 1;
			else
				dem++;
			toipham = 0;
		}
	}
	cout << dem;
	return 0;
}
