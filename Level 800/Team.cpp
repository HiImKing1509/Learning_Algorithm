#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int* a = new int[3];
	int dem = 0;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cin >> a[j];
			if (a[j] == 1)
				dem++;
		}
		if (dem >= 2)
			num++;
		dem = 0;
	}
	cout << num;
	delete[]a;
	return 0;
}
