#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, d;
	cin >> n >> d;
	vector<int>a(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	if ((n - 1) * 10 >= d || ((n - 1) * 10 + sum) > d)
		cout << "-1";
	else
	{
		int time_sing = d - sum;
		cout << time_sing / 5;
	}
	return 0;
}
