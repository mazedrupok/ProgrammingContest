#include <bits/stdc++.h>
using namespace std;
#define LL long long
int ara[1000001];
int main ()
{
    int n;
    LL a, b, c, cnt, temp;
    int tc, cs = 0;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %d", &n);
        cnt = 0;
        for (int i = 1; i <= n; i++) {
            a = i;
            b = i+1;
            c = n - (a+b);
            if (c <= b) break;
            if ((c-b) %2 == 0) cnt += ((c-b) /2);
            else {cnt += ((c-b) /2); cnt++;}
        }
        printf ("Case %d: %lld\n", ++cs, cnt);
    }
    return 0;
}

