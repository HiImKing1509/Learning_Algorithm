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
#define MIN -100000
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll th;
	cin >> th;
	while (th--)
	{
		ll n;
		cin >> n;
		vector<ll>a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		ll lc = 0;
		for (ll i = 0; i < n - 1; i++)
			if (a[i] * a[i + 1] > lc)
				lc = a[i] * a[i + 1];
		cout << lc << "\n";
	}
	return 0;
}
