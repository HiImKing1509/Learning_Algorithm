/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int tg = 1; tg <= t; tg++)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}
	cout << s;
	return 0;
}
