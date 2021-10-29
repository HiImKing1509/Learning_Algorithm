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

	string a;
	cin >> a;
	for (ll i = 0; i < a.length(); i++)
		if (a[i] == 'e' || a[i] == 'u' || a[i] == 'o' || a[i] == 'a' || a[i] == 'i' || a[i] == 'y' || a[i] == 'E' || a[i] == 'U' || a[i] == 'O' || a[i] == 'A' || a[i] == 'I' || a[i] == 'Y')
			a[i] = '0';
	vector<char>op;
	ll k = 0;
	for (ll i = 0; i < a.size(); i++)
	{
		if (a[i] != '0')
		{
			if (a[i] <= 90)
			{
				op.push_back('.');
				op.push_back(char(a[i] + 32));
			}
			else
			{
				op.push_back('.');
				op.push_back(a[i]);
			}
		}
	}
	for (char i : op)
		cout << i;
	return 0;
}
