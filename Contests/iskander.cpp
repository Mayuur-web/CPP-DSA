#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        string s;
        cin >> n;
        cin >> s;
        int c=0,max_len=0;
        for (char ch:s)
        {
            if (ch == '#' )
            {
                c++;
                max_len=max(max_len,c);
            }
            else
                c=0;
        }
        cout << (max_len+1)/2<< "\n";
       
    }
     return 0;
}