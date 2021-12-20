/*

******************COMMON BIT TECHNIQUE************

* Multipy by 2^k : s<<=k;

* Divide by 2^k: s>>=k;



* check ith bit is on: (s&(1<<i))==(1<<i)

* turn on ith bit:   s|=(1<<i);

* Turn off the ith bit: s&=(~(1<<i))

* Toggle the ith bit:   s^=(1<<i)
* Turn on all bits from l to r:   s|=(1<<(r+1)-(1<<l))
* Turn off all bits from l to r:  s&=(~((1<<(r+1))-(1<<l)))

* Get the largest 2^k such that it dvides s:
(1<<_bulitin_ctz(s)) OR (s&(-s))


*****************Bit Opertations****************

* _builtin_clz(x)
* _builtin_ctz(x)                  //count 0 till appear 1
* _builtin_popcount(x)            //count number of 1's
* _builtin_parity(x)
* _builtin_xyzll(x)               //for long long value

ex---
* _builtin_clzll(x)
* _builtin_ctzll(x)
* _builtin_popcountll(x)
* _builtin_parityll(x)
* _builtin_clzll(x)

*/

#include <iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    cout << (s & (-s)) << "\n";
    cout << (__builtin_ctz(s)) << "\n";
    cout << (__builtin_clz(s)) << "\n";
    cout << (__builtin_popcount(s)) << "\n";
    cout << (__builtin_parity(s)) << "\n";
    cout << (1 << __builtin_ctz(s)) << "\n";
    cout << (s <<= 5) << "\n";
    cout << (s >>= 5) << "\n";
    cout << (s |= (1 << 2)) << "\n";
    cout << (s &= (~(1 << 5))) << "\n";

    return 0;
}