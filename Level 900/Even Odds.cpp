#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
	ll n, k;
	cin >> n >> k;
	ll n1 = (double)n / 2 + 0.5;
	ll n2 = n / 2;
	if (k <= n1)
		cout << k * 2 - 1;
	else
		cout << (k - n1) * 2;
	return 0;
}
