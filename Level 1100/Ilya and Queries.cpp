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
	string s;
	getline(cin, s);
	ll n, k = 1;
	cin >> n;
	vector<ll>a;
	a.push_back(1);
	for (ll i = 1; i < s.size(); i++)
	{
		if (s[i] == s[i - 1])
			k++;
		a.push_back(k);
	}

	while (n--)
	{
		ll l, r;
		cin >> l >> r;
		cout << a[r - 1] - a[l - 1] << "\n";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	/*ll th;
	cin >> th;
	while (th--)*/
		SolveProblem();
	return 0;
}
