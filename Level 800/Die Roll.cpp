/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
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
#define MAX 1000000000
#define MIN -1

#define db double

#define ll long long
#define i64 __int64 // == long long

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned long long
class PS
{
private:
	int t;
	int m;
public:
	friend istream& operator>>(istream&, PS&);
	friend ostream& operator<<(ostream&, PS&);
	void Solve();
};
int GCD(int a, int b)
{
	while (b)
	{
		a = a % b;
		swap(a, b);
	}
	return a;
}
void SolveProblem()
{
	PS t;
	t.Solve();
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
ostream& operator<<(ostream& os, PS& ps)
{
	os << ps.t << "/" << ps.m;
	return os;
}
istream& operator>>(istream& is, PS& ps)
{
	is >> ps.t >> ps.m;
	return is;
}
void PS::Solve()
{
	PS k, kk;
	cin >> k;
	int ma = max(k.t, k.m);
	kk.t = 7 - ma;
	kk.m = 6;
	int gcd = GCD(kk.t, kk.m);
	kk.t /= gcd;
	kk.m /= gcd;
	cout << kk;
}
