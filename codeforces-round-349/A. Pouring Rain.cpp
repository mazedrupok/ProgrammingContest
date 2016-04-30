#include <bits/stdc++.h>
using namespace std;
#define pi 2*acos (0.0)
int main ()
{
   int d, h, v, e;
   double res, tem;
   cin >> d >> h >> v >> e;
   tem = (pi * d*d * e);
   tem /= 4;
   if (v < tem) {
      cout << "NO" << endl;
   }
   else {
      res = pi * d*d * h;
      tem = 4*v;
      tem -= (pi * d*d * e);
      res = res / tem;
      cout << "YES" << endl << res << endl;
   }
}
