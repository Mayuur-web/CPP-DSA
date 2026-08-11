#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,d;

    cin >> n;

    if (n%5==0)
    {
        d=n/5;
        
    }
    else
    {
        d=(n/5)+1;
        
    }
    return 0;
}