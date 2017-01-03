#include <bits/stdc++.h>
using namespace std;
#define ll long long
int minIndex (string s) {
//min index for lexicographically smallest string in circular rotation
    s = s+s;
    int len = s.size();
    int i = 0, j = 1, k = 0;
    while (i+k < len && j+k < len) {
        if (s[i+k] == s[j+k]) k++;
        else if (s[i+k] < s[j+k]) {
            j = j+k+1;
            if (j <= i) j = i+1;
            k = 0;
        }
        else if (s[i+k] > s[j+k]) {
            i = i+k+1;
            if (i <= j) i = j+1;
            k = 0;
        }
    }
    return min (i, j);
}
int main ()
{
    int tc, cs = 0, pos, len;
    string s, t, tt;
    scanf (" %d ", &tc);
    while (tc--) {
        cin >> s;
        len = s.size();
        pos = minIndex (s) %len;
        printf ("Case %d: %c", ++cs, s[pos]);
        for (int i = pos+1; i != pos; i++) {
            if (i == len) {i = -1; continue;}
            printf ("%c", s[i]);
        }
        printf ("\n");
    }
    return 0;
}
