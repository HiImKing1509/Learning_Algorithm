#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>a(n);

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a.rbegin(), a.rend());

	int sub = sum;
	int sum2 = 0;
	int i = 0;
	int count = 0;
	while (sum2 <= sub)
	{
		sum2 += a[i];
		count++;
		sub = sum - sum2;
		i++;
	}
	cout << count;
	return 0;
}
