#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    int largest = a;

    if (b > largest)
{
    largest = b;
}
if (c > largest)
{
    largest = c;
}
cout << "Largest = " << largest;
    return 0;
}