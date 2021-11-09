/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <list>
#include <map>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
#define pq priority_queue
#define sortU(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.rbegin(), v.rend())
#define pcl pair<char, ll>

ll GCD(ll a, ll b) {
	while (b) { a = a % b; swap(a, b); }
	return a;
} // Find GCD of 2 numbers
ll LCM(ll a, ll b) {
	return (a * b) / GCD(a, b);
} // Find LCM of 2 numbers 
ll findGCD(vector<ll>& arr) {
	ll n = arr.size(); ll result = arr[0];
	for (ll i = 1; i < n; i++) { result = GCD(arr[i], result); if (result == 1) return 1; }
	return result;
} // Find GCD of n numbers (n > 2) --- O(n)

class DIEM
{
private:
	int x;
	int y;
public:
	void Input(DIEM &A) { cin >> x >> y >> A.x >> A.y; }
	float Distance(DIEM &A) { return sqrt((x - A.x) * (x - A.x) + (y - A.y) * (y - A.y)); }
	void solve(DIEM &A)
	{
		if (x == A.x)
		{
			int dis = this->Distance(A);
			cout << x + dis << " " << y << " " << x + dis << " " << A.y;
		}
		else if (y == A.y)
		{
			int dis = this->Distance(A);
			cout << x << " " << y + dis << " " << A.x << " " << A.y + dis;
		}
		else
		{
			DIEM B; B.x = x; B.y = A.y;
			int dis1 = this->Distance(B);
			int dis2 = A.Distance(B);
			if (dis1 == dis2) cout << x << " " << A.y << " " << A.x << " " << y;
			else cout << -1;
		}
	}
};

void SolveProblem()
{
	DIEM first, second;
	first.Input(second);
	first.solve(second);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
