#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	int t = abs(a - b);
	if (t == 0)
	{
		cout << a << " " << t;
		return 0;
	}
	if (a > b)
		cout << b << " ";
	else
		cout << a << " ";
	cout << t / 2;
	return 0;
}
