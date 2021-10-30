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

	vector<int>a(14);
	a[0] = 4;
	a[1] = 7;
	a[2] = 44;
	a[3] = 47;
	a[4] = 74;
	a[5] = 77;
	a[6] = 444;
	a[7] = 447;
	a[8] = 474;
	a[9] = 477;
	a[10] = 744;
	a[11] = 747;
	a[12] = 774;
	a[13] = 777;
	
	int n;
	cin >> n;
	bool flag = false;
	for (int i = 0; i < 14; i++)
		if (n % a[i] == 0)
			flag = true;
	if (flag == true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
