#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long current_sum = 0;
        for (long long i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        current_sum += a;
        long long required_sum = (i * (i + 1)) / 2;
        if (current_sum < required_sum) {
            cout << "NO" << endl;
            return 0;
        }

    }
    cout << "YES" << endl;
   
}

return 0;
}