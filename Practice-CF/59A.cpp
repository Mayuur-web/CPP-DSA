#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int cu=0,cl=0;

    for (char ch:s)
    {
        if(isupper(ch))
            cu++;
        else
            cl++;
    }
    for (char &ch:s)
    {
        if (cu>cl)
        {
            ch=toupper(ch);
        }
        else
        {
            ch=tolower(ch);
        }
    }
    cout << s;
    return 0;
}