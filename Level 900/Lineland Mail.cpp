#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    vector<ll>a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    if (n == 2)
    {
        ll kq = abs(a[1] - a[0]);
        cout << kq << " " << kq << "\n" << kq << " " << kq;
    }
    else
    {
        //Thanh pho dau tien
        ll kq1 = a[1] - a[0];
        ll kq2 = a[n - 1] - a[0];
        if (kq1 < kq2)
            cout << kq1 << " " << kq2 << "\n";
        else
            cout << kq2 << " " << kq1 << "\n";
        //1 -> n-2 thanh pho giua
        for (ll i = 1; i < n - 1; i++)
        {
            vector<ll>kq(4);
            kq[0] = a[i] - a[i - 1];
            kq[1] = a[i + 1] - a[i];
            kq[2] = a[i] - a[0];
            kq[3] = a[n - 1] - a[i];
            sort(kq.begin(), kq.end());
            cout << kq[0] << " " << kq[3] << "\n";
        }
        //Thanh pho cuoi cung
        ll kq_cuoi1 = a[n - 1] - a[0];
        ll kq_cuoi2 = a[n - 1] - a[n - 2];
        if (kq_cuoi1 < kq_cuoi2)
            cout << kq_cuoi1 << " " << kq_cuoi2;
        else
            cout << kq_cuoi2 << " " << kq_cuoi1;
    }
    return 0;
}
