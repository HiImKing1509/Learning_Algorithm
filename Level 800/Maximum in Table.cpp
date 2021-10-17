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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<vector<int>>a(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		a[0][i] = 1;
		a[i][0] = 1;
	}
	for (int i = 1; i < n; i++)
		for (int j = 1; j < n; j++)
			a[i][j] = a[i - 1][j] + a[i][j - 1];
	cout << a[n - 1][n - 1];

	return 0;
}
