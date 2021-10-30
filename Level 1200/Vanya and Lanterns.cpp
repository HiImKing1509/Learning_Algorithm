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

	ll n, l;
	cin >> n >> l;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	ll firstDis = a[0];
	ll lastDis = l - a[n - 1];
	double res = max(firstDis, lastDis);
	double amongLargestDis = 0;
	for (ll i = 0; i < n - 1; i++)
		if ((a[i + 1] - a[i]) > amongLargestDis)
			amongLargestDis = a[i + 1] - a[i];
	amongLargestDis /= 2;
	res = max(res, amongLargestDis);
	string str_res = to_string(res);
	cout << str_res << "0000";
	return 0;
}
