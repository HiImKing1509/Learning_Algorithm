/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/

#include <bits/stdc++.h>

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
#define pll pair<ll, ll>

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
float sqrtFunc(float x) {
	float res = 0;
	for (float l = 0, r = (float)100, i = 0; i <= 100; i++)
	{
		float m = (float)(l + r) / 2;
		if (m * m <= x)	l = m, res = m;
		else r = m;
	}
	return res;
} // Find sqrt of the float number
void Divisors(ll n, set<ll>& a, ll start)
{
	// Note that this loop runs till square root
	for (ll i = start; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			a.insert(i);
			a.insert(n / i);
		}
	}
}
class graph
{
private:
	vector<ll>p;
	vector<vector<ll>>g;
	ll n;
	vector<ll>vis;
	ll res;
public:
	void dfs(ll u,ll pr)
	{
		bool f = 0;
		for (auto v : g[u])
			if (v == pr || vis[v] == 1)continue;
			else dfs(v, u), f = 1;
		if (f == 0)
			vis[u] = 1;
	}
	ll solve()
	{
		while (true)
		{
			bool f = 1;
			for (ll i = 1; i <= n; i++)
				if (vis[i] == 0)
					f = 0;
			if (f)return res;
			for (auto goc : p)
				if (vis[goc] == 0)dfs(goc, goc);
			res++;
		}
	}
	void add(ll u, ll v)
	{
		g[u].push_back(v);
	}
	void in(vector<ll>& pp)
	{
		p = pp;
	}
	graph(ll nn)
	{
		//p = pp;
		n = nn;
		g.resize(n + 1);
		vis.resize(n + 1, 0);
		res = 0;
	}
};


void SolveProblem()
{
	ll n;
	cin >> n;
	vector<ll>p(n+1);
	graph t(n);
	for (ll i = 1; i <= n; i++)
	{
		cin >> p[i];
		if(p[i]!=-1)
			t.add(p[i], i);
	}
	vector<ll>goc;
	for (ll i = 1; i <= n; i++)
		if (p[i] == -1)goc.push_back(i);
	t.in(goc);
	cout << t.solve();
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}

// Shortcut key for comment in Visual Studio 2019: Ctrl + K + C
// Shortcut key for uncomment in Visual Studio 2019: Ctrl + K + U
