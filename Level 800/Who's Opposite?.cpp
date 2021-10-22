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
	ll a, b, c;
	bool flag = true;
	cin >> a >> b >> c;
	ll subab = abs(a - b);
	ll down = 1 + subab;
	ll circle_max = 2 * down - 2;
	//cout << circle_max << "\n";
	ll res = c;
	if (a > circle_max || b > circle_max || c > circle_max)
		flag = false;
	if (min(a, b) == 1 && max(a, b) != down)
		flag = false;
	if (res < down)
		res += subab;
	else
		res -= subab;
	if (res > circle_max)
		flag = false;

	if (flag)
		cout << res;
	else
		cout << "-1";
	cout << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll th;
	cin >> th;
	while (th--)
		SolveProblem();
	return 0;
}
