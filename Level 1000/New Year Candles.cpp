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
	ll left = 0;
	ll right = arr.size() - 1;
	while (left <= right)
	{
		ll mid = (left + right) / 2;

		if (arr[mid] <= xx)
			return mid;
		if (arr[mid] > xx)
			right = mid - 1;
	}
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int a, b;
	cin >> a >> b;

	int ans = a;
	if (a < b)
		cout << ans;
	else if (a == b)
		cout << ans + 1;
	else
	{
		int res = a;
		while (res >= b)
		{
			res = res - b;
			res++;
			ans++;
		}
		cout << ans;
	}
	return 0;
}
