#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin >> n;
	queue<ll>kq;

	for (ll i = 0; i < n; i++)
	{
		ll a, b;
		cin >> a >> b;
		ll n = abs(a - b);
		if (n % 10 == 0)
			n = n / 10;
		else
			n = n / 10 + 1;
		kq.push(n);
	}
	for (ll i = 0; i < n; i++)
	{
		cout << kq.front() << "\n";
		kq.pop();
	}
	return 0;
}
