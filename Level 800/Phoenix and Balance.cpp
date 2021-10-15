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

#define MAX 26
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
		ll n;
		cin >> n;
		vector<ll>a;
		ll suma = 0;
		for (int i = n - 1; i > 0; i--)
		{
			a.push_back(pow(2, i));
			suma += pow(2, i);
		}
		ll sumb = pow(2, n);
		for (int i = 1; i < n / 2; i++)
		{
			suma -= a[a.size() - 1];
			sumb += a[a.size() - 1];
			a.pop_back();
		}
		cout << abs(suma - sumb);
		cout << "\n";
	}
	return 0;
}
