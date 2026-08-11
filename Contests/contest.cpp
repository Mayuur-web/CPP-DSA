#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
while (t--)
{
    int k;
    cin >> k;

    int n1=0;
    int n2=0;

    for (int i=0;i<k;i++)
    {
        int c;
        cin >> c;
        if(c>=3)
        {
            n1++;
        }
        if (c>=2)
        {
            n2++;
        }
    }
    if (n1 >= 1 || n2 >= 2)
    {
        cout << "Yes\n";
    }
    else 
    {
        cout << "No\n";
    }
   
}
 return 0;
}