#include <bits//stdc++.h>
using namespace std;

int main ()
{
    //ios::sync_with_stdio(0); cin.tie(0);
   // freopen ("in.txt", "r", stdin);
   // freopen ("out.txt", "w", stdout);
    int tc, cs = 0, n;
    int res[27];
    res[0] = 1;
    scanf (" %d", &tc);
    for (int i = 1; i <= 26; i++) {
        res[i] = res[i-1]*2 + 1;
    }
    while (tc--) {
        scanf (" %d", &n);
        n = n%25;
        printf ("Case %d: %d\n", ++cs, res[n] %33554431);
    }

    return 0;
}

