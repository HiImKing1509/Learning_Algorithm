#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    ll th;
    cin >> th;
    while (th--)
    {
        ll n, k;
        cin >> n >> k;

        if (n < k)
            cout << k - n;
        else if (n % 2 == k % 2)
            cout << 0;
        else
            cout << 1;
        cout << "\n";
    }
    return 0;
}
