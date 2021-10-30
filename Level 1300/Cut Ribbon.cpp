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
#define MAX 4001
#define MIN 0

#define ll long long
#define i64 __int64 // == long long

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned long long


void SolveProblem()
{
	i64 n, a, b, c, lc = MIN;
	cin >> n >> a >> b >> c; // 5 5 3 2
	for (i64 i = 0; i * a <= n; i++)
	{
		for (i64 j = 0; j * b + i * a <= n; j++)
		{
			if ((n - (i * a + b * j)) % c == 0)
			{
				i64 k = (n - (i * a + b * j)) / c;
				if (i + j + k > lc)
					lc = i + j + k;
			}
		}
	}
	cout << lc;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
