Binary exponentiation(also known as exponentiation by squaring) is a ^ n trick which allows to calculate using O(LOGN) instead of O(N) only multiplications(instead of multiplications required by the naive approach).

It also has important applications in many tasks unrelated to arithmetic, since it can be used with any operations that have the property of associativity:

We will convert exponent to binary value

Hence for 3^13 instead of running a loop for 13 times
we can convert 13 into binary which is 3^(1101)
This can be done only running a loop for 4 times

RECURRENCE RELATION

a^n = 1, if n==0
a^(n/2) if n is even
(a^(n-1/2)^2)\*a if n is odd
