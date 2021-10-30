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

	string s;
	cin >> s;
	string ss = s;
	if (97 <= s[0] && s[0] <= 122)
	{
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] > 90)
			{
				cout << ss;
				return 0;
			}
			else
				s[i] += 32;
		}
		s[0] -= 32;
		cout << s;
	}
	else
	{
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] > 90)
			{
				cout << ss;
				return 0;
			}
			else
				s[i] += 32;
		}
		s[0] += 32;
		cout << s;
	}
	return 0;
}
