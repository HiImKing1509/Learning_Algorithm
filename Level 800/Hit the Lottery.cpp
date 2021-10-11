#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll n;
	cin >> n;

	int count = 0;
	ll t = n;
	while (t >= 100)
	{
		t -= 100;
		count++;
	}
	while (t >= 20)
	{
		t -= 20;
		count++;
	}
	while (t >= 10)
	{
		t -= 10;
		count++;
	}
	while (t >= 5)
	{
		t -= 5;
		count++;
	}
	while (t >= 1)
	{
		t -= 1;
		count++;
	}
	cout << count;
	return 0;
}
