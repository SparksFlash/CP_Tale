#include <bits/stdc++.h>
using namespace std;
int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    return sum;
}
int main()
{
    char s[100004];
    cin >> s;
    int cnt = 0, digit_sum = 0;
    int len = strlen(s);
    if (len == 1)
    {
        cout << 0 << '\n';
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        digit_sum += s[i] - '0';
    }
    cnt++;
    int n = digit_sum;
    while (n > 9)
    {
        n = sum_of_digits(n);
        cnt++;
    }
    cout << cnt << '\n';
}