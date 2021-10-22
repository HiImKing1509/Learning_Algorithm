#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string a;
	cin >> a;
	bool flag = false;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
		{
			flag = true;
			i = a.length();
		}
	}
	if (flag == true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
