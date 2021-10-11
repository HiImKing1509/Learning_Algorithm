#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	int n;
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s[0] == 84)
			sum += 4;
		if (s[0] == 67)
			sum += 6;
		if (s[0] == 79)
			sum += 8;
		if (s[0] == 68)
			sum += 12;
		if (s[0] == 73)
			sum += 20;
	}
	cout << sum;
	return 0;
}
