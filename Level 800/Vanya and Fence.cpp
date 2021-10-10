#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, h;
	cin >> n >> h;
	int a[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > h)
			sum = sum + 2;
		else
			sum = sum + 1;
	}

	cout << sum;
	return 0;
}
