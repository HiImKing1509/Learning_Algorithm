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



void SolveProblem()
{
	string s;
	int n;
	cin >> n >> s;
	bool flag = false;
	if (s.size() == 1)
		cout << -1 << " " << -1;
	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] != s[i + 1])
			{
				flag = true;
				cout << i + 1 << " " << i + 2;
				break;
			}
		}
		if (!flag)
			cout << -1 << " " << -1;
	}
	cout << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
