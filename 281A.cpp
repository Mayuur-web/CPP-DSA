#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    if (isupper(s[0]))
    {
        cout << s;
    }
    else
    {
        s[0]=toupper(s[0]);
        cout << s;
    }
    return 0;
}