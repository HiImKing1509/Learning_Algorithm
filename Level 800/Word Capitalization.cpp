/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <cctype>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str;
    getline(cin, str);


    if (str[0] >= 97 && str[0] <= 122)
        cout << char(str[0] - 32);
    else
        cout << char(str[0]);
    for (int i = 1; i < str.length(); i++)
    {
        cout << str[i];
    }
    return 0;
}
