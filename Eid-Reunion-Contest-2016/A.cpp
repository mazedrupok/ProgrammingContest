#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main ()
{
    LL tc, cs = 0, len, n;
    scanf (" %lld", &tc);
    while (tc--) {
        scanf (" %lld %lld", &len, &n);
        printf ("Case %lld: %lld\n", ++cs, len-n-1);
    }
    return 0;
}
