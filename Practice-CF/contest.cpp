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
        int n;
        cin >> n;
        int arr[n];

        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int l1,l2;

        for (int i=0;i<n;i++)
        {
            if (arr[i]==1)
            {
                l1+=1;
                l2+=1;
            }
            else if (arr[i]==2)
            {
                l1-=1;
                l2+=1;
            }
            else{
                l1-=1;
                l2-=1;
            }
            
        }

    }
}