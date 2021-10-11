#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ll cost, r;
	cin >> cost >> r;
	if (cost % 10 == r || cost % 10 == 0)
	{
		cout << 1;
		return 0;
	}
	else
	{
		ll i = 1;
		ll t = cost;
		while ((t % 10) != r && (t % 10) != 0)
		{
			t = cost * i;
			i++;
		}
		cout << i - 1;
		return 0;
	}
	return 0;
}
