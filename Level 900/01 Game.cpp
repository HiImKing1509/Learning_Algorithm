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
	for (ll i = 0; i < n; i++)
	{
		string game;
		cin >> game;
		int c_zero = 0;
		for (int h = 0; h < game.size(); h++)
		{
			if (game[h] == '0')
				c_zero++;
		}
		int temp;
		if (c_zero >= (game.size() - c_zero))
			temp = game.size() - c_zero;
		else
			temp = c_zero;

		if (temp % 2 != 0)
			cout << "DA";
		else
			cout << "NET";
		cout << "\n";
	}
	return 0;
}
