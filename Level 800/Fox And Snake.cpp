#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 1; j <= m; j++)
				cout << "#";
			cout << "\n";
		}
		if (i % 2 == 0)
		{
			if (i % 4 == 2)
			{
				for (int j = 1; j < m; j++)
					cout << ".";
				cout << "#";
				cout << "\n";
			}
			if (i % 4 == 0)
			{
				cout << "#";
				for (int j = 2; j <= m; j++)
					cout << ".";
				cout << "\n";
			}
		}
	}

	return 0;
}
