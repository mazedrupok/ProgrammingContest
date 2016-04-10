#include <bits/stdc++.h>
using namespace std;

int main ()
{
   int tc, cs = 0, n, ans, m, temp, x;
   int visit[10];
   freopen ("A-large(1).in", "r", stdin);
   freopen ("A-out-out.in", "w", stdout);
   cin >> tc;
   while (tc--) {
      cin >> n;
      printf ("Case #%d: ", ++cs);
      if (n == 0) {cout << "INSOMNIA" << endl; continue;}
      memset (visit, 0, sizeof (visit));
      m = 0;
      temp = false;
      x = n;
      while (temp == false) {
         //cout << n << endl;
         m = n;
         while (m) {
            visit[m %10] = 1;
            m /= 10;
         }
         temp = true;
         for (int i = 0; i < 10; i++) {
            if (visit[i] == 0) {temp = false; n += x; break;}
         }
      }
      cout << n << endl;
   }
}
