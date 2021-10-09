#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int x;
	cin >> x;
	int dem = 0;
	if (x >= 1 && x <= 5)
		cout << 1;
	else
	{
		while (x > 5)
		{
			x = x - 5;
			dem++;
		}
		dem++;
		cout << dem;
	}
	return 0;
}
