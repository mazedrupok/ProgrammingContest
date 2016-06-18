#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    char s[15];
    scanf (" %d", &n);
    scanf (" %s", s);
    scanf (" %s", s);
    if (strcmp (s, "week") == 0) {
        if (n == 5 || n == 6) printf ("53");
        else printf ("52");
    }
    else if (strcmp (s, "month") == 0) {
        if (n <= 29) printf ("12");
        else if (n == 30) printf ("11");
        else if (n == 31) printf ("7");
    }
    return 0;
}
