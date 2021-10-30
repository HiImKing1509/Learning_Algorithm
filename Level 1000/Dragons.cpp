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

    ll s, n;
    cin >> s >> n;
    vector<ll>x(n);
    vector<ll>y(n);

    for (ll i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    ll min_index;
    for (ll i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (ll j = i + 1; j < n; j++)
            if (x[min_index] > x[j])
                min_index = j;
        swap(x[min_index], x[i]);
        swap(y[min_index], y[i]);
    }
    ll sum = s;
    int flag = 1;
    for (ll i = 0; i < n; i++)
    {
        if (sum > x[i])
            sum += y[i];
        else
            flag = 0;
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
