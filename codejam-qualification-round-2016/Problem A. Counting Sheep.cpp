#include <bits/stdc++.h>
using namespace std;
int main ()
{
   string s, t;
   int visit[10];
   int tc, cs = 0, temp = false, p, carry, i;
   freopen ("A-large(1).in", "r", stdin);
   freopen ("A-largeout.in", "w", stdout);
   cin >> tc;
   while (tc--) {
      cin >> s;
      printf ("Case #%d: ", ++cs);
      if (s == "0") {cout << "INSOMNIA" << endl; continue;}
      t = s;
      memset (visit, 0, sizeof (visit));
      for ( i = 0; i < t[i]; i++) {
         p = t[i] -48;
         visit[p] = 1;
      }
      temp = true;
      for ( i = 0; i < 10; i++) {
         if (visit[i] == 0) {
            temp = false;
            break;
         }
      }
      reverse (s.begin(), s.end());
      reverse (t.begin(), t.end());
      while (temp == false) {
            carry = 0;
         for ( i = 0; s[i]; i++) {
            p = t[i] + s[i] - 96 + carry;
            t[i] = (p %10) + 48;
            carry = p /10;
         }
         while (carry != 0) {
            if (t[i] == '\0') {
               t += (carry + 48);
               carry = 0;
            }
            else {
               p = t[i] - 48 + carry;
               t[i] = (p %10) + 48;
               carry = p /10;
            }
            i++;
         }
         //cout << t << endl;
         for ( i = 0; i < t[i]; i++ ) {
            p = t[i] - 48;
            visit[p] = 1;
         }
         temp = true;
         for ( i = 0; i < 10; i++) {
            if (visit[i] == 0) {
               temp = false;
               break;
            }
         }
      }
      reverse (t.begin(), t.end());
      cout << t << endl;
   }
}
