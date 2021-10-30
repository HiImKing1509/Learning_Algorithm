/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

#define MAX 100000
#define MIN -100000
#define ll long long

string strCopy(string s)
{
	string ss = "";
	for (int i = s.length() - 2; i >= 0; i--)
		ss += s[i];
	return ss;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll th;
	cin >> th;
	while (th--)
	{
		string s, t, ss;
		cin >> s >> t;
		string ans = "";
		bool flag = false;
		for (int i = 0; i < s.length(); ++i)
		{
			ans += s[i];
			string str = ans + strCopy(ans);
			if (str.find(t) != s.npos)
				flag = true;
		}
		if (flag)
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
	return 0;
}
