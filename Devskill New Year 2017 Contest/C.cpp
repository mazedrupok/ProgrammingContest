#include <bits/stdc++.h>
using namespace std;
#define ll long long
char s[100005];
int main ()
{
    int tc, cs = 0, pos, len, mx, one;
    scanf (" %d ", &tc);
    while (tc--) {
        scanf (" %s", s);
        len = strlen (s);
        one = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] == '1') one++;
            else if (one > 0) {
                s[i] = '2';
                one--;
            }
        }
        //cout << one << endl;
        int two = 0;
        for (int i = len-1; i >= 0 && one != 0; i--) {
            if (s[i] == '0') continue;
            if (s[i] == '2') two++;
            else if (s[i] == '1' && two == 0) {
                s[i] = '0';
                one--;
            }
            else if (s[i] == '1' && two > 0) two--;
        }

        one = 0;
        mx = 0;
        //cout << s << endl;
        for (int i = 0; i < len; i++) {
            if (s[i] == '1' || s[i] == '2') one++;
            else one = 0;
            mx = max (mx, one);
        }
        printf ("Case %d: %d\n", ++cs, mx);
    }
    return 0;
}
