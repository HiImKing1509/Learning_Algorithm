#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;
	cin >> n;

	if (n % 2 == 0)
		cout << n / 2;
	else
		cout << n / 2 - n;

	return 0;
	
}
