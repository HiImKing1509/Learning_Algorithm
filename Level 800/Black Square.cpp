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
	
	vector<ll>a(4);
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	string s;
	cin >> s;
	ll n = s.length();
	ll res = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
			res += a[0];
		else if (s[i] == '2')
			res += a[1];
		else if (s[i] == '3')
			res += a[2];
		else
			res += a[3];
	}
	cout << res;
	return 0;
}
