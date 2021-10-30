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
#define ld long double
#define ll long long
#define i64 __int64 // == ll

#define ull unsigned ll
#define ui64 unsigned __int64 // == unsigned ll


void SolveProblem()
{
	ll n;
	cin >> n;
	vector<char>a(n);
	vector<char>b(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	for (ll i = 0; i < n; i++)
		cin >> b[i];


	ll i = 0, sum = 0, k = 0;
	set<int>s;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			sum += 2;
			s.clear();
			if (k != 0)
				sum += k;
			k = 0;
		}
		else
		{
			if (a[i] == '1' && b[i] == '1')
			{
				if (k == 0)
					s.insert(a[i]);
				else if (k == 1)
					sum += 2;
				else
					sum = sum + k + 1;
				k = 0;
			}
			else
			{
				if (s.size() == 1)
				{
					sum += 2;
					s.clear();
				}
				else
					k++;
			}
		}
		i++;
	}
	cout << sum + k << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
 
