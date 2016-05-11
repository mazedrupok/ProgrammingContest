#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n, res, tc;
    scanf (" %lld", &tc);
    while (tc--) {
        scanf (" %lld", &n);
        res = n* (2*n-1) + 1;
        printf ("%lld\n", res);
    }
    return 0;
}
