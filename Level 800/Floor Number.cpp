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
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <set>
using namespace std;

#define MAX 100000
#define MIN -100000
#define ll long long

void SolveProblem()
{
	int n, x;
	cin >> n >> x;
	if (n == 1 || n == 2)
		cout << 1;
	else
	{
		n -= 2;
		int floor = n / x;
		if (floor * x == n)
			cout << floor + 1;
		else
			cout << floor + 2;
	}
	cout << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
		SolveProblem();
	return 0;
}
