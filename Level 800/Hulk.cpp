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

	string love = "I love that ";
	string hate = "I hate that ";
	int n;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (i % 2 == 0)
			cout << love;
		else
			cout << hate;
	}
	if (n % 2 == 0)
		cout << "I love it";
	else
		cout << "I hate it";
	return 0;
}
