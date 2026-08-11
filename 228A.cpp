#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> st;
    int n;

    for (int i=0;i<4;i++)
    {
        cin >> n;
        st.insert(n);
    }
    cout << 4 - st.size();
    return 0;
}