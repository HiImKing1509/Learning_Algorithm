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

	ll n, m, a;
	cin >> n >> m >> a;
	ll demr = 0;
	ll demd = 0;
	ll r = 0;
	ll d = 0;
	if (n <= a && m <= a)
		cout << 1;
	else
	{
		if (n % a == 0)
			demr = n / a;
		else
			demr = n / a + 1;

		if (m % a == 0)
			demd = m / a;
		else
			demd = m / a + 1;

		cout << demr * demd;
	}
	return 0;
}
