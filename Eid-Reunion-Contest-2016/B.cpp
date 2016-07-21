#include <bits/stdc++.h>
using namespace std;
#define LL unsigned long long
LL ara[1000001];
void ff (int n) {
    ara[0] = 1; ara[1] = 2;
    for (int i = 2; i <= n; i++) {
        ara[i] = ara[i-1] + ara[i-2];
    }
}
int main ()
{
    //ios::sync_with_stdio(0); cin.tie(0); //read("in.txt");
    ff (100);
    int tc, cs = 0;
    LL sum;
    char str[100];
    string s;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %s", str);
        s = str;
        sum = 0;
        reverse (s.begin(), s.end());
        for (int i = 0; s[i]; i++) {
            if (s[i] == '1') sum += ara[i];
        }
        printf ("Case %d: %lld\n", ++cs, sum);
    }
    return 0;
}

