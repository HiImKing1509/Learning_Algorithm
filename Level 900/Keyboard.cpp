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
#define i64 __int64 // == long long

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned long long


bool checkBin(ld mid, ll n, vector<ll>&x, vector<ll>&v)
{
	ld mini = INFINITY, maxi = -INFINITY;
	for (ld i = 0; i < n; i++)
	{
		ld a = x[i] - mid * v[i];
		ld b = x[i] + mid * v[i];
		mini = min(mini, b);
		maxi = max(maxi, a);
	}
	return maxi <= mini;
}
void SolveProblem()
{
	char lr;
	cin >> lr;
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string inp;
	cin >> inp;
	for (int i = 0; i < inp.size(); i++)
	{
		for (int j = 0; j < s.size(); j++)
		{
			if (inp[i] == s[j])
			{
				if (lr == 'L')
					cout << s[j + 1];
				else
					cout << s[j - 1];
			}
		}
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
