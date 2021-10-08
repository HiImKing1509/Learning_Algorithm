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

	int x = 0;
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		if (s == "X++")
			x++;
		else if (s == "X--")
			x--;
		else if (s == "++X")
			++x;
		else
			--x;
	}
	cout << x;
	return 0;
}
