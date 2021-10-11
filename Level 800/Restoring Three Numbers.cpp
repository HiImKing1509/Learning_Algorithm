#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ll n = 4;
	ll a[4];
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	sort(a, a + n);
	cout << (a[0] + a[1]) - a[3] << " ";
	cout << (a[0] + a[2]) - a[3] << " ";
	cout << (a[1] + a[2]) - a[3] << " ";
	return 0;
}
