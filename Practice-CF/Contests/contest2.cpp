#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> count1(n, 0), count2(n, 0), count3(n, 0);
    int c1 = 0, c2 = 0, c3 = 0;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) c1++;
        if (a[i] == 2) c2++;
        if (a[i] == 3) c3++;
        count1[i] = c1;
        count2[i] = c2;
        count3[i] = c3;
    }
    vector<int> mid(n, 0);
    for (int i = 0; i < n; ++i) {
        mid[i] = count1[i] + count2[i] - count3[i];
    }
    vector<int> maxvalue(n, -1e9);
    maxvalue[n - 2] = mid[n - 2]; 
    for (int i = n - 3; i >= 0; --i) {
        maxvalue[i] = max(maxvalue[i + 1], mid[i]);
    }

    bool possible = false;
    for (int i = 0; i < n - 2; ++i) {
        
        bool left= count1[i] >= (count2[i] + count3[i]);
        
        bool middle= maxvalue[i + 1] >= mid[i];

        if (left && middle) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

    }
    return 0;
}