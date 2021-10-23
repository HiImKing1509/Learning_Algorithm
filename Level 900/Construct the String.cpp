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
#include <set>
using namespace std;

#define MAX 100000
#define MIN -100000
#define ll long long

void SolveProblem()
{
	int n, a, b;
	cin >> n >> a >> b;
	vector<char>vec(n);
	int co = 1;
	char f = 'a';
	for (int i = 0; i < n; i++)
	{
		if (co < b)
		{
			vec[i] = f;
			f++;
			co++;
		}
		else
		{
			vec[i] = f;
			f = 'a';
			co = 1;
		}
	}
	for (int i = 0; i < n; i++)
		cout << vec[i];
	cout << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
		SolveProblem();
	return 0;
}
