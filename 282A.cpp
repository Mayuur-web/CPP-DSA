#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int x=0;
    cin >> n;
    string s;
    for (int i=0;i<n;i++)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
        {
            x++;
        }
        else if (s == "X--" || s == "--X")
        {
            x--;
        }
    }
    cout << x;
    return 0;
}