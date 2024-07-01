bool is_prime(int n)
{
    int divisors = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors++;
        }
    }
    if (divisors == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_almost_prime(int n)
{
    for (int i = 0; i <= n; i++)
    {
        
    }
}

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
}