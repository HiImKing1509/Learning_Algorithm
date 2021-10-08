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
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	getline(cin, s);

	char* a = new char[s.length()];
	int j = 0;
	int dem = 0;
	for (int i = 0; i < s.length(); i++)
	{
		a[j] = s[i];
		j++;
		dem++;
	}

	sort(a, a + dem);

	int count = 0;
	for (int i = 0; i < dem - 1; i++)
	{
		if (a[i] != a[i + 1])
			count++;
	}
	int c = count + 1;
	
	if (c % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

	delete[]a;
	return 0;
}
