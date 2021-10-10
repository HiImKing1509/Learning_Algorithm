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
	int n;
	cin >> n;
	int pX, pY;
	cin >> pX;
	vector<int>a1(pX);
	for (int i = 0; i < pX; i++)
		cin >> a1[i];

	cin >> pY;
	vector<int>a2(pY);
	for (int i = 0; i < pY; i++)
		cin >> a2[i];
	vector<bool>res(n + 1, false);
	res[0] = true;
	for (int i = 0; i < pX; i++)
		res[a1[i]] = true;
	for (int i = 0; i < pY; i++)
		res[a2[i]] = true;
	bool flag = true;
	for (int i = 0; i < res.size(); i++)
		if (res[i] == false)
			flag = false;
	if (flag == true)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
	return 0;
}
