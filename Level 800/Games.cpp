/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<int>a(2 * n);
	for (int i = 0; i < 2 * n; i++)
		cin >> a[i];

	int count = 0;
	for (int i = 0; i < 2 * n - 1; i += 2)
		for (int j = 1; j < 2 * n; j += 2)
			if (a[i] == a[j])
				count++;

	cout << count;
	return 0;
}
