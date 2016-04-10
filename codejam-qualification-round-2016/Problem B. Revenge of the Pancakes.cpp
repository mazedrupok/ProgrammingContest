#include <bits//stdc++.h>
using namespace std;
int main ()
{
   int tc, cs = 0, n, cnt = 0, temp = false;
   string s;
   freopen ("B-large.in", "r", stdin);
   freopen ("outlarge.in", "w", stdout);
   cin >> tc;
   while (tc--) {
      cin >> s;
      cnt = 0; temp = false;
      while (temp == false) {
         temp = true;
         for (int i = 1; s[i]; i++ ) {
            if (s[i] != s[0]) {
               for (int j = 0; j < i; j++) {
                  s[j] = s[i];
               }
               cnt++;
               temp = false;
               break;
            }
         }
      }
      if (s[0] == '-') cnt++;
      printf ("Case #%d: ", ++cs);
      cout << cnt << endl;
   }
}
