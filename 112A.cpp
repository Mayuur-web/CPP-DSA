#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,s1;
    cin >> s >> s1;
    int l=s.length();
    int sum =0,sum1=0;
    for (char &ch : s)
{
    ch = tolower(ch);
}
for (char &ch : s1)
{
    ch = tolower(ch);
}

    if (s == s1)
{
    cout << 0;
}
else if (s<s1)
{
    cout << -1;
}
else
{
    cout << 1;
}
    return 0;
}