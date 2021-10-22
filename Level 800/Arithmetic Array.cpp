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
	queue<int>kq;

	for (int i = 0; i < n; i++)
	{
		int t;
		int sum = 0;
		cin >> t;
		vector<int>a(t);
		for (int j = 0; j < t; j++)
		{
			cin >> a[j];
			sum += a[j];
		}
		if (sum == t)
			kq.push(0);
		else if (sum < t)
			kq.push(1);
		else
			kq.push(sum - t);
	}
	for (int i = kq.size(); i > 0; i--)
	{
		cout << kq.front() << "\n";
		kq.pop();
	}
	return 0;
}
