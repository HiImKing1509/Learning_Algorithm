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

	int n;
	cin >> n;
	vector<int>a(n);
	int c = 0;
	int l = 0;
	int vtc = -1;
	int vtl = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)
		{
			c++;
			vtc = i;
		}
		else
			vtl = i;
	}
	if (c == 1)
		cout << vtc + 1;
	else
		cout << vtl + 1;

	return 0;
}
