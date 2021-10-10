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

bool BeauYear(int y)
{
	int a = y % 10;
	int b = (y / 10) % 10;
	int c = (y / 100) % 10;
	int d = (y / 1000) % 10;
	if (a != b && a != c && a != d && b != c && b != d && c != d)
		return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int year;
	cin >> year;
	for (int i = year + 1; i <= 9012; i++)
	{
		if (BeauYear(i) == true)
		{
			cout << i;
			i = 9013;
		}
	}
	return 0;
}
