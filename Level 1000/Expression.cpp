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
	int a, b, c;
	cin >> a >> b >> c;
	if (a != 1 && b != 1 && c != 1)
		cout << a * b * c;
	else
	{
		vector<int>arr(6);
		arr[0] = a * b * c;
		arr[1] = a + b + c;
		arr[2] = a * b + c;
		arr[3] = a + b * c;
		arr[4] = (a + b) * c;
		arr[5] = a * (b + c);
		sort(arr.begin(), arr.end());
		cout << arr[5];
	}
	return 0;
}
