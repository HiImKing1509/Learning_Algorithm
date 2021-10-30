/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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
#define MAX 1000000
#define MIN -1
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
#define pq priority_queue
#define sort(v) sort(v.begin(), v.end())
#define _sort(v) sort(v.rbegin(), v.rend())
#define pll pair<ll, ll>

void SolveProblem()
{
	string s;
	cin >> s;
	if (s.size() <= 3)
		cout << "NO";
	else if (s.find("ABA") == s.npos && s.find("BAB") == s.npos)
	{
		bool f1 = false, f2 = false;
		if (s.find("AB") != s.npos)
		{
			f1 = true;
			ll vt = s.find("AB");
			s[vt] = '0';
			s[vt + 1] = '0';
		}
		if (s.find("BA") != s.npos) f2 = true;
		if (f1 && f2) cout << "YES";
		else cout << "NO";
	}
	else 
	{
		string s1 = s;
		bool f1 = false, f2 = false;
		ll i = s.find("ABA");
		ll j = s1.find("BAB");
		if (i != s.npos)
		{
			s[i] = s[i + 1] = s[i + 2] = '0';
			if (s.find("BA") != s.npos || s.find("AB") != s.npos)
				f1 = true;
		}
		if (j != s1.npos)
		{
			s1[j] = s1[j + 1] = s1[j + 2] = '0';
			if (s1.find("BA") != s1.npos || s1.find("AB") != s1.npos)
				f2 = true;
		}
		if (f1 || f2) cout << "YES";
		else cout << "NO";
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
