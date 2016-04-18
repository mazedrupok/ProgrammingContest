#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ara[1000001];
int main ()
{
   int tc, cs = 0;
   ll n, res, tot;
   ara[0] = 0;
   for (ll i = 1; i <= 1000000; i++) {
      ara[i] = i*(i-1)*3 + 1;
   }

   cin >> tc;
   while (tc--) {
      cin >> n;
      res = 0;
      for (int i = 1; i <= n; i++) {
         res += ara[i];
      }
      printf ("Case %d: ", ++cs);
      cout << ara[n] << " " << res << endl;
   }
   return 0;
}
