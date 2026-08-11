#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }

    double per = (double)sum / n;

    cout << per;

    return 0;
}