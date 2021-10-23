#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll n;
	cin >> n;
	string a;
	cin >> a;
	ll count_Zero = 0;
	for (ll i = 0; i < a.size(); i++)
	{
		if (a[i] == '0')
			count_Zero++;
	}
	cout << abs((a.size() - count_Zero) - count_Zero);
	return 0;
}
