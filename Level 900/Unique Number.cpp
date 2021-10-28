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

    int th;
    cin >> th;
    while (th--)
    {
        int x;
        cin >> x;
        if (x < 10)
            cout << x;
        else if (x > 45)
            cout << -1;
        else
        {
            stack<string>a;
            int i = 9;
            while (x > 0)
            {
                x = x - i;
                if (x >= 0)
                    a.push(to_string(i));
                else
                    a.push(to_string(x + i));
                i--;
            }
            for (int st = a.size(); st > 0; st--)
            {
                cout << a.top();
                a.pop();
            }
        }
        cout << "\n";
    }
    return 0;
}
