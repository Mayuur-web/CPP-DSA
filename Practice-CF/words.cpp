#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin >> n;
    std::string s[n];
    for (int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for (int i=0;i<n;i++)
{
    l=s[i].length();
if (l>10)
{
    cout << s[i][0] << (l-2) << s[i][l-1] << '\n';
}
else
{
    cout << s[i] << '\n';
}
}
return 0;
}