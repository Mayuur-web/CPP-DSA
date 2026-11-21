#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int p, q,c=0;

for (int i = 0; i < n; i++)
{
    cin >> p >> q;

    if (q - p >= 2)
        c++;
}
    cout << c;
    return 0;
}