#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
using namespace std;
 
//typedef long long ll;
 
int CountNumbers(int t)
{
    int num = t;
    int co = 0;
    while (num != 0)
    {
        num /= 10;
        co++;
    }
    return co;
}
int FirstNum(int t)
{
    int co = CountNumbers(t);
    int res = 1;
    for (int i = 2; i <= co; i++)
        res *= 10;
    return t / res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int th;
    cin >> th;
    while (th--)
    {
        int n;
        cin >> n;
        if (CountNumbers(n) == 10)
            cout << 81;
        else if (n / 10 == 0)
            cout << n;
        else
        {
            int ans = 0;
            int fNum = FirstNum(n);
            vector<int>a(10);
            a[0] = 0;
            for (int i = 1; i < 10; i++)
                a[i] = a[i - 1] * 10 + 1;
            int count_num = CountNumbers(n);
            ans = ans + (count_num - 1) * 9;
            if (n >= a[count_num] * fNum)
                ans += fNum;
            else
                ans = ans + fNum - 1;
            cout << ans;
        }
        cout << "\n";
    }
    return 0;
}
