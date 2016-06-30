#include <bits//stdc++.h>
using namespace std;

int main ()
{
    int res[56];
    res[0] = 0;
    res[1] = 2;
    res[2] = 15;
    res[3] = 104;
    res[4] = 714;
    for (int i = 5; i <= 9; i++) res[i] = 867;
    for (int i = 10; i <= 23; i++) res[i] = 952;
    res[24] = 967;
    res[25] = 1001;
    res[26] = 1006;

    int tc;
    scanf (" %d", &tc);
    long long n;
    while (tc--) {
        scanf (" %lld", &n);
        if (n >= 55) printf ("1006\n");
        else printf ("%d\n", res[n]);
    }

    return 0;
}


