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
	int n;
	cin >> n;
	vector<char>s(n);
	vector<char>ss;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		if (s[i] == 'U') ss.push_back('D');
		if (s[i] == 'D') ss.push_back('U');
		if (s[i] == 'L') ss.push_back('L');
		if (s[i] == 'R') ss.push_back('R');
	}
	for (int i = 0; i < n; i++)
		cout << ss[i];
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
