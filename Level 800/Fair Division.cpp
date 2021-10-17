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

	ll th;
	cin >> th;
	while (th--)
	{
		int n;
		cin >> n;
		vector<int>a(n);
		vector<int>one;
		vector<int>oneone;

		int cOne = 0, cTwo = 0, sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == 1)
				cOne++;
			else
				cTwo++;
			sum += a[i];
		}
		if (cOne == 0 && cTwo % 2 != 0)
			cout << "NO";
		else if (cOne % 2 != 0)
			cout << "NO";
		else
			cout << "YES";
		cout << "\n";
	}
	return 0;
}
