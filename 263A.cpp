#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5][5];
    int r, c;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    int sum = abs(r - 2) + abs(c - 2);

    cout << sum;

    return 0;
}