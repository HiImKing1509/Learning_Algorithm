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

using namespace std;

#define MAX 1000000000
#define MIN -100000
#define ll long long

void Partition(vector<ll>& a, ll left, ll right, vector<ll>& b)
{
	if (left >= right)
		return;

	ll pivot = a[(left + right) / 2];

	ll i = left, j = right;
	while (i < j)
	{
		while (a[i] < pivot)
			i++;
		while (a[j] > pivot)
			j--;

		if (i <= j)
		{
			if (i < j)
			{
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
			i++;
			j--;
		}
	}

	Partition(a, left, j, b);
	Partition(a, i, right, b);
}
void QuickSort(vector<ll>& a, vector<ll>& b)
{
	Partition(a, 0, a.size() - 1, b);
}
void SolveProblem()
{
	ll n, k;
	cin >> n >> k;
	vector<ll>a(n);
	ll sum = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i < k)
			sum += a[i];
	}
	if (n == k)
		cout << 1;
	else
	{
		vector<ll>res;
		vector<ll>vt;
		res.push_back(sum);
		vt.push_back(0);
		ll vtf = 0;
		ll vtl = k;
		while (vtl < n)
		{
			sum = sum - a[vtf] + a[vtl];
			res.push_back(sum);
			vt.push_back(vtf + 1);
			vtf++;
			vtl++;
		}
		QuickSort(res, vt);
		cout << vt[0] + 1;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	SolveProblem();
	return 0;
}
