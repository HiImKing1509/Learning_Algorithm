#include<iostream>
#include <string>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	string t;
	getline(cin, s);
	getline(cin, t);

	int j = t.length() - 1;
	int dem = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != t[j])
			dem++;
		j--;
	}
	if (dem == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
