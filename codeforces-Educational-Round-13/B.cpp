#include <iostream>
using namespace std;
typedef long long LL;
LL GCD (LL a, LL b) {
    if (a == 0) return b;
    return GCD (b%a, a);
}
int main ()
{
    LL n, a, b, p, q, res1, res2, lcm;
    cin >> n >> a >> b >> p >> q;

    LL gcd = GCD (a, b);
    lcm = (a*b) /gcd;
    res1 = (n /b) * q;
    res1 += ((n /a) - (n /lcm)) * p;

    gcd = GCD (b, a);
    lcm = (a*b) /gcd;
    res2 = (n /a) * p;
    res2 += ((n /b) - (n /lcm)) * q;

    if (res1 > res2) cout << res1 << endl;
    else cout << res2 << endl;
    return 0;
}
