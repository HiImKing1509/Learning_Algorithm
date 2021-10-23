#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string a;
	cin >> a;
	if (a.size() <= 3)
	{
		cout << a;
		return 0;
	}
	for (int i = 0; i < a.size() - 2; i++)
	{
		if (a[i] == 'W')
		{
			if (a[i + 1] == 'U' and a[i + 2] == 'B')
			{
				a[i] = ' ';
				a[i + 1] = ' ';
				a[i + 2] = ' ';
			}
			else
			{
			}
		}
		else
		{
		}
	}
	queue<char>b;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] != ' ' and a[i + 1] != ' ')
			b.push(a[i]);
		else if (a[i] != ' ' and a[i + 1] == ' ')
		{
			b.push(a[i]);
			b.push(' ');
		}
		else
		{
		}
	}
	for (int i = b.size(); i > 0; i--)
	{
		cout << b.front();
		b.pop();
	}
	return 0;
}
