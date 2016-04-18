#include <bits/stdc++.h>
using namespace std;
int main ()
{
   long long tc, k, T, p, e, t;
   cin >> tc;
   while (tc--) {
      cin >> p >> e >> t;

      if (e == 0) cout << "0 Seconds" << endl;
      else if (p == 0) cout << "Impossible\n";
      else {
         cout << t << " Seconds" << endl;
      }
   }
   return 0;
}

