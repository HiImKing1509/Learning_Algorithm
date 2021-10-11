#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	getline(cin, s);

	char* a = new char[s.length()];
	int j = 0;
	int dem = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			a[j] = s[i];
			j++;
			dem++;
		}
	}
	if (dem == 0)
	{
		cout << 0;
		return 0;
	}
	sort(a, a + dem);

	int count = 0;
	for (int i = 0; i < dem - 1; i++)
	{
		if (a[i] != a[i + 1])
			count++;
	}
	cout << count + 1;
	delete[]a;
	return 0;
}
