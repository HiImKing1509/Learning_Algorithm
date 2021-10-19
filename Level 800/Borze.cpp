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
	ll i = 0;
	stack<char>st;
	while (i < s.size())
	{
		if (s[i] == '.')
		{
			if (st.empty())
				cout << "0";
			else
			{
				cout << "1";
				st.pop();
			}
		}
		else
		{
			if (st.empty())
				st.push(s[i]);
			else
			{
				cout << "2";
				st.pop();
			}
		}
		i++;
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
