#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,c;
    cin >> n;
    int p1[n];
    int p2[n];
    int p3[n];
    
   c=0;

    for (int i=0;i<n;i++)
    {
        cin >> p1[i] >> p2[i] >> p3[i];
    }
    for (int i=0;i<n;i++)
    {
        if (p1[i]+p2[i]+p3[i] >= 2)
        {
            c++;
        }
    }
    cout << c;
return 0;
}