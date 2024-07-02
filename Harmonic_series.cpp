#include <bits/stdc++.h>
using namespace std;
double sum(int n)
{
    double i, s = 0.0;
    for (i = 1; i <= n; i++)
        s = s + 1 / i;

    return s;
}
int main()
{
    int n = 30;

    cout << "Sum is " << sum(n) << '\n';
    cout << floor(log2(n)) + 1 << '\n';
}