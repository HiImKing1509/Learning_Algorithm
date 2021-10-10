#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
		{
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
	return 0;
}
