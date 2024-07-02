#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i) /// Complexity - nlog(n)
        {
            sum += j;
        }
    }
    cout << sum << endl;

    // int n = 1000000;
    // long long sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; i * j <= n; j++)  /// Same complexity - nlog(n)
    //     {
    //         sum += i * j;
    //     }
    // }
    // cout << sum << endl;
    // return 0;
}
