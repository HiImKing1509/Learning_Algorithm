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

#define MAX 100
#define MIN -1
#define ll long long

ll BinarySearch(vector<ll>& arr, ll xx)
{
	ll len = arr.size() - 1;
	ll st = 0;
	ll ans = -1;
	while (st <= len)
	{
		ll mid = (st + len) / 2;
		if (arr[mid] <= xx)
			st = mid + 1;
		else
		{
			ans = mid;
			len = mid - 1;
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll n, q;
	cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	cin >> q;
	sort(a.begin(), a.end());
	vector<ll>b(q);
	for (ll i = 0; i < q; i++)
		cin >> b[i];
	ll count = 0;
	for (ll i = 0; i < q; i++)
	{
		if (b[i] < a[0])
			cout << 0;
		else if (b[i] >= 100000 || BinarySearch(a, b[i]) == -1)
			cout << n;
		else
		{
			if (BinarySearch(a, b[i]) != -1)
			{
				count += BinarySearch(a, b[i]);
				cout << count;
				count = 0;
			}
		}
		cout << "\n";
	}


	return 0;
}
