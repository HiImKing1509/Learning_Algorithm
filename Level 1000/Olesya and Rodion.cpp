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
	int n;
	string  t;
	cin >> n >> t;
	vector<string>a;

	if (t == "10")
	{
		if (n == 1)
			a.push_back("-1");
		else
		{
			a.resize(n, "0");
			a[0] = "1";
		}
	}
	else
		a.resize(n, t);
	for (int i = 0; i < a.size(); i++)
		cout << a[i];
	cout << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//ll th;
	//cin >> th;
	//while (th--)
	SolveProblem();
	return 0;
}
