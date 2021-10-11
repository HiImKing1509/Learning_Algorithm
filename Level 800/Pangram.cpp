#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	string a;
	cin >> a;
	if (n < 26)
	{
		cout << "NO";
		return 0;
	}
	n = a.length();
	int j = 0;
	char* s = new char[n];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 97)
			a[i] = a[i] + 32;
		s[j] = a[i];
		j++;
	}
	sort(s, s + n);
	if (int(s[n - 1]) - int(s[0]) < 25)
	{
		cout << "NO";
		return 0;
	}
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] != s[i + 1])
		{
			if (int(s[i + 1]) - int(s[i]) != 1)
				flag = 0;
		}
	}
	if (flag == 0)
		cout << "NO";
	else
		cout << "YES";
	delete[]s;
	return 0;
}
