/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
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

#define MAX 100000
#define MIN -100000
#define ll long long
int BinarySearch(vector<int>& arr, int xx)
{
	int left = 0;
	int right = arr.size() - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] == xx)
			return mid;
		if (arr[mid] > xx)
			right = mid - 1;
		if (arr[mid] < xx)
			left = mid + 1;
	}
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int th;
	cin >> th;
	while (th--)
	{
		int a;
		cin >> a;
		if (360 % (180 - a) == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
