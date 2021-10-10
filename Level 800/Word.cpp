#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	getline(cin, s);

	int count_a = 0;
	int count_A = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			count_a++;
		else
			count_A++;
	}
	if (count_a >= count_A)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = char(s[i] + 32);
		}
	}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = char(s[i] - 32);
		}
	}
	cout << s;

	return 0;
}
