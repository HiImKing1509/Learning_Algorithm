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
	string s, ss;
	getline(cin, s);
	getline(cin, ss);
	bool flag = false;
	for (ll i = 0; i < ss.length(); i++)
	{
		if (ss[i] == s[0] || ss[i] == s[1])
		{
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "YES";
	else
		cout << "NO";
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
