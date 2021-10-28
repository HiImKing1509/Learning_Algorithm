#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <numeric>
using namespace std;

typedef long long ll;
int GCD(int a, int b)
{
	while (b)
	{
		a = a % b;
		swap(a, b);
	}
	return a;
}
int LCM(int a, int b)
{
	return (a * b) / GCD(a, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
	{
		int n;
		cin >> n;
		vector<int>a(n);
		vector<int>b(n, 0);

		int dau = 0;
		int cuoi = n - 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % 2 == 0)
			{
				b[dau] = a[i];
				dau++;
			}
			else
			{
				b[cuoi] = a[i];
				cuoi--;
			}
		}
		int dem = 0;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (GCD(b[i], 2 * b[j]) != 1)
					dem++;
		cout << dem << "\n";
	}
    return 0;
};
