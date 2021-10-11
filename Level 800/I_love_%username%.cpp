#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
	int min;
	int max;
	int dem = 0;
	if (n == 1)
	{
		cout << dem;
		return 0;
	}
	if (a[1] > a[0])
	{
		min = a[0];
		max = a[1];
		dem++;
	}
	else if (a[1] < a[0])
	{
		min = a[1];
		max = a[0];
		dem++;
	}
	for (int i = 2; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			dem++;
		}
		if (a[i] > max)
		{
			max = a[i];
			dem++;
		}
	}
	cout << dem;
	return 0;
}
