/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <climits>
#include <iomanip>
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

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define MAX 1000000000
#define MIN -1

#define db double

#define ll long long
#define i64 __int64 // == long long

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned long long

ll BinarySearch(vector<ll>&arr, ll xx)
{
	ll left = 0;
	ll right = arr.size() - 1;
	while (left <= right)
	{
		ll mid = (left + right) / 2;

		if (arr[mid] == xx)
			return mid;
		if (arr[mid] > xx)
			right = mid - 1;
		if (arr[mid] < xx)
			left = mid + 1;
	}
	return -1;
}
ll l;
ll r;
void ClosetToTheRight(vector<ll>& arr, ll xx)
{
	l = 0;
	r = arr.size() - 1;
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		if (arr[mid] >= xx)
			r = mid - 1;
		if (arr[mid] < xx)
			l = mid + 1;
	}
}
void SolveProblem()
{
	i64 n, m, sum = 0;
	cin >> n;
	vector<i64>a(n);
	vector<i64>BS;
	BS.push_back(sum);
	for (i64 i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		BS.push_back(sum);
	}
	cin >> m;
	vector<i64>b(m);
	for (i64 i = 0; i < m; i++)
		cin >> b[i];
	for (i64 i = 0; i < m; i++)
	{
		if (BinarySearch(BS, b[i]) != -1)
			cout << BinarySearch(BS, b[i]);
		else
		{
			ClosetToTheRight(BS, b[i]);
			cout << r + 1;
		}
		cout << "\n";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
