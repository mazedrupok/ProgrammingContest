#include <bits//stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    int tc, cs = 0, res;
    int f0, f1, g0, g1, f2, g2;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %d %d %d %d", &f0, &f1, &g0, &g1);
        int mx = 0;
        for (int i = 0; i < 100000; i++) { //repeat after 4 values
            f2 = f1+g0; g2 = g1+f0;
            mx = max (mx, abs (f2 - g2));
            f0 = f1; g0 = g1;
            f1 = f2; g1 = g2;
        }
        printf ("Case %d: %d\n", ++cs, mx);
    }
    return 0;
}
