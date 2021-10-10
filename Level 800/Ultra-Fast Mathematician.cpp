#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s, t;
	cin >> s;
	cin >> t;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '0' && s[i] != '1')
			i++;
		if (s[i] != t[i])
			cout << "1";
		else
			cout << "0";
	}
	return 0;
}
