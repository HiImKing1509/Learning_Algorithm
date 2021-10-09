#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	int i = 0;
	while (a <= b)
	{
		a = a * 3;
		b = b * 2;
		i++;
	}
	cout << i;
	return 0;
}
