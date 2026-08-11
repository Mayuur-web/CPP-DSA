#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,c=0;
    cin >> n >> k;
    int arr[n];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for (int i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
            if (arr[i] >= arr[k-1])
            {
                c++;
            }
        }
    }
    cout << c;
    return 0;
}