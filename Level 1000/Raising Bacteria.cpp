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

	ll n;
	cin >> n;
	int vti = -1;
	vector<ll>W;
	for (int i = 0; i < 30; i++)
	{
		W.push_back(pow(2, i));
		if (pow(2, i) == n)
		{
			cout << 1;
			return 0;
		}
		else if (pow(2, i) < n)
			vti = i;
	}
	int count = 0;
	while (n > 0)
	{
		if (n > W[vti])
		{
			n -= W[vti];
			count++;
			vti--;
		}
		else if (n == W[vti])
		{
			count += 1;
			cout << count;
			return 0;
		}
		else
		{
			vti--;
		}
	}

	return 0;
}
