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

#define MAX 26
#define MIN -1
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<int>str(MAX, -1);
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			if (str[s[i] - 65] == -1)
				str[s[i] - 65] = i;
			else
			{
				if ((i - str[s[i] - 65]) != 1)
					flag = false;
				else
					str[s[i] - 65] = i;
			}
		}
		if (flag)
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
	return 0;
}
