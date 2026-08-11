#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Array Display";
    for (int i=0;i<n;i++)
    {
        cout << arr[i];
    }
    
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout << "Sum of Array" << sum;

    int largest = arr[0];
    for (int i=0;i<n;i++)
    {
        if (largest<arr[i])
        {
            largest = arr[i];
        }
    }
    cout << "Maximum Value in Array:" << largest;

    int small = arr[0];
    for (int i=0;i<n;i++)
    {
        if (small>arr[i])
        {
            small = arr[i];
        }
    }
    cout << "Minimum value in array:" << small;
return 0;
}