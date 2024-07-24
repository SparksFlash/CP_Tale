#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // vector<int> v(1000, 0);
    vector<int> v;
    v.reserve(100);

    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        v.push_back(no);
        cout << "Capacity :" << v.capacity() << " Size :" << v.size() << '\n';
    }

    for (int x : v)
        cout << x << ' ';
}