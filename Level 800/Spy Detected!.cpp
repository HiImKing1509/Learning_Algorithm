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
		vector<int>a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		if (a[0] != a[1] && a[0] != a[2])
			cout << 1;
		else if (a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3])
			cout << n;
		else
		{
			int vti = -1;
			for (int i = 1; i < n - 1; i++)
				if (a[i] != a[i - 1] && a[i] != a[i + 1])
					vti = i;
			cout << vti + 1;
		}
		cout << "\n";
	}
	return 0;
}
