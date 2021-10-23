
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
	ll k = 1;
	ll ln = 0;
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	for (ll i = 1; i < n; i++)
	{
		if (a[i] >= a[i - 1])
			k++;
		else
		{
			ln = max(ln, k);
			k = 1;
		}
	}
	ln = max(ln, k);
	cout << ln;
	return 0;
}
