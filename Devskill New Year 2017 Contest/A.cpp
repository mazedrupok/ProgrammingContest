#include <bits/stdc++.h>
using namespace std;
#define ll long long
char s[10000001];
int main ()
{
    int n, res, tc, cs = 0;
    scanf (" %d", &tc);
    while (tc--) {
        scanf (" %s", s);
        int len = strlen (s);
        int p = 0; bool test = 0;
        if (len == 1 && s[0] != 'A' && (s[0] - 48) %8 == 0) {
            printf ("YES\n");
            continue;
        }
        if (len == 2 && s[0] != 'A' && s[1] != 'A') {
            p = (s[0] - 48) * 10;
            p += (s[1] - 48);
            if (p %8 == 0) {
                printf ("YES\n");
                continue;
            }
        }
        if (len == 3 && s[0] != 'A' && s[1] != 'A' && s[2] != 'A') {
            p = (s[0] - 48) * 100;
            p += (s[1] - 48) * 10;
            p += (s[2] - 48);
            if (p %8 == 0) {
                printf ("YES\n");
                continue;
            }
        }
        if (s[len-1] == 'A') {
            test = 0;
            if (len == 1) {printf ("YES\n8\n"); test = 1;}
            else if (len == 2) {
                p = (s[len-2] - 48) * 10;
                for (int i = 0; i < 10; i++) {
                    if ((p+i) %8 == 0) {test = 1; printf ("YES\n%d\n", i); break;}
                }
            }
            else if (len >= 3) {
                p = (s[len-3] - 48) * 100;
                p += (s[len-2] - 48) * 10;
                for (int i = 0; i < 10; i++) {
                    if ((p+i) %8 == 0) {test = 1; printf ("YES\n%d\n", i); break;}
                }
            }
            if (test == 0) printf ("NO\n");
        }
        else if (s[len-2] == 'A') {
            test = 0;
            if (len == 2) {
                p = s[len-1] - 48;
                for (int i = 0; i < 10; i++) {
                    if ((i*10 + p) %8 == 0) {test = 1; printf ("YES\n%d\n", i); break;}
                }
            }
            else if (len >= 3) {
                p = (s[len-3] - 48) * 100;
                p += (s[len-1] - 48);
                for (int i = 0; i < 10; i++) {
                    if ((p+i*10) %8 == 0) {test = 1; printf ("YES\n%d\n", i); break;}
                }
            }
            if (test == 0) printf ("NO\n");
        }
        else if (s[len-3] == 'A') {
            test = 0;
            p = (s[len-2] - 48) * 10;
            p += (s[len-1] - 48);
            for (int i = 0; i < 10; i++) {
                if (len == 3 && i == 0) continue;
                if ((p+i*100) %8 == 0) {test = 1; printf ("YES\n%d\n", i); break;}
            }
            if (test == 0) printf ("NO\n");
        }
        else {
            test = 0;
            p = (s[len-3] - 48) * 100;
            p += (s[len-2] - 48) * 10;
            p += (s[len-1] - 48);

            if (p %8 == 0 && s[0] != 'A') {test = 1; printf ("YES\n0\n");}
            if (p %8 == 0 && s[0] == 'A') {test = 1; printf ("YES\n1\n");}

            if (test == 0) printf ("NO\n");
        }
    }
    return 0;
}
