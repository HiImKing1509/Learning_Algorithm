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

#define MAX 100
#define MIN -1
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
	{
		int a, b;
		cin >> a >> b;

		if (a == b)
			cout << (a + b) * (a + b);
		else
		{
			int minsq = min(a, b);
			int maxsq = max(a, b);
			if (minsq * 2 >= maxsq)
				cout << (minsq + minsq) * (minsq + minsq);
			else
				cout << maxsq * maxsq;
		}
		cout << "\n";
	}

	return 0;
}
