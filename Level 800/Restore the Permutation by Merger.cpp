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
using namespace std;

#define MAX 100000
#define MIN -100000
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
	{
		int n;
		cin >> n;
		vector<int>a(2 * n);
		vector<int>b(n + 1, -1);
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> a[i];
			if (b[a[i]] == -1)
				b[a[i]] = i;
			else
				cout << a[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
