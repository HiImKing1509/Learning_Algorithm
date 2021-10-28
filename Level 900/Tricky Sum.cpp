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
		ll sum = n * (n + 1) / 2;
		for (int i = 0; i < 30; i++)
		{
			if (pow(2, i) <= n)
				sum = sum - 2 * pow(2, i);
		}
		cout << sum << "\n";
	}
	return 0;
}
