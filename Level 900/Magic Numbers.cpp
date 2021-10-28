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

    string a;
    cin >> a;
    bool flag = true;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] != '1' && a[i] != '4')
            flag = false;
    }
    if (a[0] == '4')
        flag = false;
    if (a.find("444") <= a.size())
        flag = false;

    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
