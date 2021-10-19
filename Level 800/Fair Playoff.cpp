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
	queue<string>yn;
	for (int i = 0; i < n; i++)
	{
		vector<int>a(4);
		vector<int>b;
		for (int j = 0; j < a.size(); j++)
		{
			cin >> a[j];
			b.push_back(a[j]);
		}
		sort(b.begin(), b.end());
		if (a[1] > a[0])
			b[0] = a[1];
		else
			b[0] = a[0];
		if (a[2] > a[3])
			b[1] = a[2];
		else
			b[1] = a[3];

		sort(b.begin(), b.end());
		if (b[0] != b[1] || b[2] != b[3])
			yn.push("NO");
		else
			yn.push("YES");
	}
	for (int k = yn.size(); k > 0; k--)
	{
		cout << yn.front() << "\n";
		yn.pop();
	}
	return 0;
}
