#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int CountNum(int k)
{
	int dem = 0;
	while (k != 0)
	{
		k = k / 10;
		dem++;
	}
	return dem;
}
void PhanTich(int x)
{
	stack<int>q;
	queue<int>r;
	int dv;
	int count = CountNum(x);
	while (x != 0)
	{
		int dv = x % 10;
		q.push(dv);
		x /= 10;
	}
	int dem = 0;
	int value;
	for (int i = count - 1; i >= 0; i--)
	{
		value = q.top() * pow(10, i);
		if (value != 0)
		{
			r.push(value);
			dem++;
		}
		q.pop();
	}
	cout << dem << "\n";
	for (int j = r.size(); j > 0; j--)
	{
		cout << r.front() << " ";
		r.pop();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		PhanTich(a[i]);
		cout << "\n";
	}
	return 0;
}
