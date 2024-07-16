#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
int suffix_sum[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    suffix_sum[n + 1] = 0; // Initialize suffix_sum beyond the last element to 0
    for (int i = n; i >= 1; i--)
        suffix_sum[i] = suffix_sum[i + 1] + a[i];

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l++;
        r++;
        int sum = suffix_sum[l] - suffix_sum[r + 1];
        cout << sum << '\n'; // Output the result
    }
}
