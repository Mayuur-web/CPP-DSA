#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0,d=0;

    for (char ch:s)
    {
        if (ch=='A')
        {
            a++;
        }
        else{
            d++;
        }
    }
    if (a==d)
    {
        cout << "Friendship";
    }
    else if (a>d)
    {
        cout << "Anton";
    }
    else
    cout << "Danik";
    return 0;
}