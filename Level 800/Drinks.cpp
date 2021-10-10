#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;
	cin >> n;

	long long t;
	long long sum = 0;
	long long dem = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		dem++;
		sum = sum + t;
	}
	cout << fixed << setprecision(12) << (double)sum / dem;
	return 0;
}
