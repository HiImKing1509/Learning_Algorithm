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

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll th;
	cin >> th;
	while (th--)
	{
		ll n;
		cin >> n;
		ll mul = 2 * n;
		vector<ll>a(mul);
		ll dem = 0;
		for (ll i = 0; i < mul; i++)
		{
			cin >> a[i];
			if (a[i] % 2 == 0)
				dem++;
		}
		if (dem == (mul - dem))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
