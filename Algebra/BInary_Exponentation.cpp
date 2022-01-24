
#include <iostream>
using namespace std;

/// Using loops
long long binpow(long long a, long long b)
{
    long long res = 1;

    while (b > 0)
    {
        if (b & 1)
            res = res * a;

        a = a * a;
        b >>= 1;
    }
    return res;
}

/// using recursion

long long recur_binpow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long temp = recur_binpow(a, b / 2);
    long long res = temp * temp;
    if (b % 2 == 1)
        res *= a;
    return res;
}

/// Time complexity of this method is O(Logn) instead of O(N)

int main()
{

    long long base, expo;

    cout << "Enter the base and the exponent value respectively: " << endl;
    cin >> base >> expo;

    long long a = binpow(base, expo);
    cout << a << endl;

    long long b = recur_binpow(base, expo);
    cout << b;

    return 0;
}