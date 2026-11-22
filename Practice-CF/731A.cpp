#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    char curr = 'a';
    int total = 0;

    for (char ch : s)
    {
        int diff = abs(ch - curr);
        total += min(diff, 26 - diff);
        curr = ch;
    }

    cout << total;

    return 0;
}