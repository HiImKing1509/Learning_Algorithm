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

	string s1, s2;
	cin >> s1 >> s2;
	int flag = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] <= 90)
			s1[i] += 32;
		if (s2[i] <= 90)
			s2[i] += 32;
		if (s1[i] > s2[i])
		{
			flag = 1;
			i = s1.size();
		}
		else if (s1[i] < s2[i])
		{
			flag = -1;
			i = s1.size();
		}
		else
		{ }
	}
	cout << flag;
	return 0;
}
