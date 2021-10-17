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
		int a, b, c, n;
		cin >> a >> b >> c >> n;
		int max3 = max(a, b);
		max3 = max(max3, c);
		if (a < max3)
			n -= (max3 - a);
		if (b < max3)
			n -= (max3 - b);
		if (c < max3)
			n -= (max3 - c);
		if (n >= 0 && n % 3 == 0)
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
	return 0;
}
