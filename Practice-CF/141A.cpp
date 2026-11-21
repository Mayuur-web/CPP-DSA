#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string h, g, s;
    cin >> h >> g >> s;

    vector<char> v;

    for (int i = 0; i < h.length(); i++)
    {
        v.push_back(h[i]);
    }

    for (int i = 0; i < g.length(); i++)
    {
        v.push_back(g[i]);
    }

    
    if (v.size() != s.length())
    {
        cout << "NO";
        return 0;
    }

    sort(v.begin(), v.end());
    sort(s.begin(), s.end());

    int c = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s[i])
        {
            c++;
        }
    }

    if (c == v.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}