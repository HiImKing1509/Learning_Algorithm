#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	
	int p, q;
	int dem = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> p >> q;
		if (q - p > 1)
			dem++;
	}
	cout << dem;
	return 0;
}
