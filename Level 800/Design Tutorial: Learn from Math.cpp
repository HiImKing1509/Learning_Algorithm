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
void Prime(vector<bool>& a, ll num)
{
	a.resize(num + 1, true);
	a[0] = false;
	a[1] = false;

	for (ll i = 0; i <= sqrt(num); i++)
	{
		if (a[i])
		{
			for (ll j = i * i; j <= num; j += i)
			{
				a[j] = false;
			}
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
	ll n;
	cin >> n;
	vector<bool>sieve;
	Prime(sieve, n);
	for (ll i = 4; i < sieve.size(); i++)
	{
		if (!sieve[i])
		{
			ll j = n - i;
			if (!sieve[j])
			{
				cout << i << " " << j;
				i = sieve.size();
			}
		}
	}
    return 0;
}
