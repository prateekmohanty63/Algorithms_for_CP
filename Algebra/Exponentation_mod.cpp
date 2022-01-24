#include <iostream>
using namespace std;

long long bipow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res *= a % m;
        }
        a = a * a % m;
        b >>= 1;
    }

    return res;
}

int main()
{
    long long base, expo, m;
    cin >> base >> expo >> m;

    cout << bipow(base, expo, m);
    return 0;
}