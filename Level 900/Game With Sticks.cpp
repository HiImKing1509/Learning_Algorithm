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
 
    int n, m;
    cin >> n >> m;
 
    if (n == 1 || m == 1)
        cout << "Akshat";
    else
    {
        int t = -1;
        if (n < m)
            t = n;
        else
            t = m;
        if (t % 2 == 0)
            cout << "Malvika";
        else
            cout << "Akshat";
    }
    return 0;
}
