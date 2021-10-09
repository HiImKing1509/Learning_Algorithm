#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int k, n, w;
	cin >> k >> n >> w;

	int s = 0;
	for (int i = 1; i <= w; i++)
	{
		s = s + k * i;
	}
	int t = s - n;
	if (t >= 0)
		cout << t;
	else
		cout << 0;
	return 0;
}
