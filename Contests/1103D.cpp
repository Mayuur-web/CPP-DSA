#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int mx=v[0];
        for(int x:v)
        {
            if (mx <x)
            {
                mx=x;
            }
        }
        vector<int> c(n);
        for(int i=0;i<n;i++)
        {
            c[i]=mx+1-v[i];
        }
        cout << *max_element(c.begin(),c.end()) << '\n';
    }
    return 0;
}

/*#include <bits/stdc++.h>
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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int mx = *max_element(v.begin(), v.end());
        int mn = *min_element(v.begin(), v.end());

        cout << (mx + 1) - mn << '\n';
    }

    return 0;
}*/