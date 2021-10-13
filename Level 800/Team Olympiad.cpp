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

#define MAX 100
#define MIN -1
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<int>a(n);

	int One = 0;
	int Two = 0;
	int Three = 0;
	vector<int>one;
	vector<int>two;
	vector<int>three;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
		{
			One++;
			one.push_back(i + 1);
		}
		else if (a[i] == 2)
		{
			Two++;
			two.push_back(i + 1);
		}
		else
		{
			Three++;
			three.push_back(i + 1);
		}
	}
	int minstt = min(One, Two);
	minstt = min(minstt, Three);
	cout << minstt << "\n";
	for (int i = 0; i < minstt; i++)
		cout << one[i] << " " << two[i] << " " << three[i] << "\n";
	return 0;
}
