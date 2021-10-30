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
	ll n;
	cin >> n;
	vector<int>a(2, 0);
	bool flag = false;
	for (ll i = 0; i < n; i++)
	{
		ll num1, num2;
		cin >> num1 >> num2;
		ll num = num1 - num2;
		if (num < 0)
			a[0] = 1;
		else if (num > 0)
			a[1] = 1;
		if (a[0] != 0 && a[1] != 0)
		{
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "Happy Alex";
	else
		cout << "Poor Alex";
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
