#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main ()
{
   LL a, b, c;
   cin >> a >> b >> c;
   if (a == b) cout << "YES";
   else if (c == 0) {
      cout << "NO";
   }
   else if (c > 0) {
      if (b <= a) cout << "NO";
      else {
         LL d = (b-a) /c;
         if (c*d == (b-a) && d >= 0) cout << "YES";
         else cout << "NO";
      }
   }
   else if (c < 0) {
      if (b >= a) cout << "NO";
      else {
         LL d = (b-a) /c;
         if (c*d == (b-a)  && d >= 0) cout << "YES";
         else cout << "NO";
      }
   }
   return 0;
}
