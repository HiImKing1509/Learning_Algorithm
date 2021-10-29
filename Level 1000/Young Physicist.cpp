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
	int sum0 = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (n > 0)
	{
		vector<int>a(3);
		cin >> a[0] >> a[1] >> a[2];
		sum0 += a[0];
		sum1 += a[1];
		sum2 += a[2];
		n--;
	}
	if (sum0 == 0 && sum1 == 0 && sum2 == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
