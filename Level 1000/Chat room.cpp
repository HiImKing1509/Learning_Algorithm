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

	string s;
	cin >> s;
	bool flag = false;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'h')
		{
			for (int j = i + 1; j < s.size(); j++)
			{
				if (s[j] == 'e')
				{
					for (int k = j + 1; k < s.size(); k++)
					{
						if (s[k] == 'l')
						{
							for (int l = k + 1; l < s.size(); l++)
							{
								if (s[l] == 'l')
								{
									for (int m = l + 1; m < s.size(); m++)
									{
										if (s[m] == 'o')
										{
											flag = true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (flag == true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
