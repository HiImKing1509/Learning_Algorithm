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
		ll n;
		cin >> n;
		vector<int>myPoints(n);
		vector<int>yourPoints(n);
		for (ll i = 0; i < n; i++)
			cin >> myPoints[i];

		priority_queue<int>you;
		for (ll i = 0; i < n; i++)
		{
			cin >> yourPoints[i];
			you.push(yourPoints[i]);
		}

		sort(myPoints.rbegin(), myPoints.rend());
		sort(yourPoints.rbegin(), yourPoints.rend());

		int k = n - n / 4;
		ll mySum = 0;
		ll yourSum = 0;
		for (ll i = 0; i < k; i++)
		{
			mySum += myPoints[i];
			yourSum += yourPoints[i];
			you.pop();
		}
		if (mySum >= yourSum)
			cout << 0;
		else
		{
			ll m = n;
			ll l = k, t = k;
			while (mySum < yourSum)
			{
				m++;
				l = m - m / 4;
				if (l > k)
				{
					mySum += 100;
					if (you.size() != 0)
					{
						yourSum += you.top();
						you.pop();
					}
					k = l;
				}
				else
				{
					mySum -= myPoints[t - 1];
					mySum += 100;
					t--;
				}
			}
			cout << m - n;
		}
		cout << "\n";
	}
	return 0;
}
