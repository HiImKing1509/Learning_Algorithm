#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;
	cin >> n;
	int dv;
	int dem = 0;
	while (n != 0)
	{
		dv = n % 10;
		if (dv == 4 || dv == 7)
			dem++;
		n = n / 10;
	}
	if (dem == 7 || dem == 4)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
