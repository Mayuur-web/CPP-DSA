#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int l,l1;
    l=s.length();
    vector<char> v;
    for (int i=0;i<l;i++)
    {
        if (i%2 == 0)
        {
            v.push_back(s[i]);
        }
    }
    l1=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<l1;i++)
    {
        cout << v[i];
        if (i!= l1-1)
        cout << "+";
    }
    return 0;
}