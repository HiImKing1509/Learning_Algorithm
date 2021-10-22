#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	int n = s.length();
	if (n <= 6)
	{
		cout << "NO";
		return 0;
	}
	int sum = 0;
	int dem2 = 0;
	for (int i = 0; i <= n - 7; i++)
	{
		int flag = 1;
		for (int j = i; j < i + 6; j++)
		{
			if (s[j] != s[j + 1])
				flag = 0;
		}
		if (flag == 1)
			dem2++; 
	}
	if (dem2 == 0)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
