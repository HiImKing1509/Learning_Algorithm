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
	vector<ll>b(n);
	ll first = 0;
	ll last = n - 1;
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	for (ll i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			b[i] = a[first++];
		else
			b[i] = a[last--];
	}
	for (ll i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << "\n";
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
