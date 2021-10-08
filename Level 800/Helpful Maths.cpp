/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	getline(cin, s);


	int* a = new int[100];
	int n = s.length();
	int j = 0;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= '1' && s[i] <= '3')
		{
			num++;
			a[j] = s[i] - '0';
			j++;
		}
	}

	sort(a, a + num);
	for (int i = 0; i < num - 1; i++)
	{
		cout << a[i] << "+";
	}
	cout << a[num - 1];

	delete[]a;
	return 0;
}
