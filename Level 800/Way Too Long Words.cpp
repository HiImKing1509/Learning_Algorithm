#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	queue<string>s;

	string a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		s.push(a);
	}

	for (int i = 0; i < n; i++)
	{
		string a = s.front();
		int n = a.length();
		if (n > 10)
			cout << a[0] << a.length() - 2 << a[n - 1] << "\n";
		else
			cout << a << "\n";
		s.pop();
	}
	return 0;
}
