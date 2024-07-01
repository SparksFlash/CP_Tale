#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1 || count(s.begin(), s.end(), s[0]) == s.size())
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            sort(s.begin(), s.end());
            if (s == string(s.rbegin(), s.rend()))
            {
                swap(s[0], s[1]);
            }
            cout << s << '\n';
        }
    }
}
