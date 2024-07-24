#include <bits/stdc++.h>
using namespace std;

void updateArray(array<int, 6> &xarr, int i, int val)
{
    xarr[i] = val;
}

void print(const array<int, 6> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ',';
}

int main()
{
    array<int, 6> arr = {3, 5, 6, 1, 9, 7};
    updateArray(arr, 0, 100);
    // arr[0] = 28;

    // sort
    sort(arr.begin(), arr.end());
    print(arr);
    cout << '\n';

    // same elements in an array
    array<int, 10> tens;
    tens.fill(10);

    for (int i = 0; i < tens.size(); i++)
        cout << tens[i] << ' ';

    cout << '\n';

    // For each loop
    for (int x : arr)
        cout << x << ' ';
}