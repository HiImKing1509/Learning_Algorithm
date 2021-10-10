#include <iostream>
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
 
	int n;
	cin >> n;
 
	int a[100000];
	int p;
	int j = 0;
 
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		a[j] = p;
		j++;
	}
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] != a[i + 1])
			dem++;
	}
	cout << dem + 1;
	return 0;
}
