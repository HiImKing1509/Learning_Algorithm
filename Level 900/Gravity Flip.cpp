#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}
