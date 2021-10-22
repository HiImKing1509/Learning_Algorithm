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
		int n, d;
		cin >> n >> d;
		vector<int>a(n);
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] <= d)
				count++;
		}
		if (count <= 1)
			cout << "NO";
		else if (count == n)
			cout << "YES";
		else
		{
			sort(a.begin(), a.end());
			if (a[0] + a[1] <= d)
				cout << "YES";
			else
				cout << "NO";
		}
		cout << "\n";
	}
	return 0;
}
