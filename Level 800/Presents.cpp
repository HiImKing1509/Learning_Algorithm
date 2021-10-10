/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
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

    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b.push_back(i + 1);
    }
    ll min_index;
    for (ll i = 0; i < a.size() - 1; i++)
    {
        min_index = i;
        for (ll j = i + 1; j < a.size(); j++)
            if (a[min_index] > a[j])
                min_index = j;
        swap(a[min_index], a[i]);
        swap(b[min_index], b[i]);
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    return 0;
}
