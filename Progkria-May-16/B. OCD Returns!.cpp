#include <bits/stdc++.h>
using namespace std;
int min (int a, int b, int c) {
   if (a <= b && a <= c) return a;
   else if (b <= a && b <= c) return b;
   else if (c <= a && c <= b) return c;
}
int main ()
{
   int n, a, b, c, d, sum = 0;
   cout << min (4, 5, 3);
   cin >> n;
   int ara[n];
   for (int i = 0; i < n; i++ ) cin >> ara[i];
   if (n == 1) cout << ara[0] << endl;
   else if (n == 2) cout << abs (ara[0] - ara[1]) << endl;
   else if (n == 3) {
      a = abs (ara[0] - ara[1]) + abs (ara[1] - ara[2]);
      b = abs (ara[1] - ara[0]) + abs (ara[0] - ara[2]);
      c = abs (ara[0] - ara[2]) + abs (ara[2] - ara[1]);
      d = min (a, b, c);
      cout << d << endl;
   }
 else {
   for (int i = 1; i < n-1; i++) {
      if (i == n-2 ) {
         a = abs (ara[i-2] - ara[i-1]) + abs (ara[i-1] - ara[i]) + abs (ara[i] - ara[i+1]);
         b = abs (ara[i-2] - ara[i]) + abs (ara[i] - ara[i-1]) + abs (ara[i-1] - ara[i+1]);
         c = abs (ara[i-2] - ara[i-1]) + abs (ara[i-1] - ara[i+1]) + abs (ara[i+1] - ara[i]);
         int d = min (a, b, c);
         if (d == b) swap (ara[i], ara[i-1]);
         else if (d == c) {swap (ara[i], ara[i+1]); i++;}
         continue;
      }
      if (i == 1) {
         a = abs (ara[i-1] - ara[i]) + abs (ara[i] - ara[i+1]) + abs (ara[i+1] - ara[i+2]);
         b = abs (ara[i] - ara[i-1]) + abs (ara[i-1] - ara[i+1]) + abs (ara[i+1] - ara[i+2]);
         c = abs (ara[i-1] - ara[i+1]) + abs (ara[i+1] - ara[i]) + abs (ara[i] - ara[i+2]);
         int d = min (a, b, c);
         if (d == b) swap (ara[i], ara[i-1]);
         else if (d == c) {swap (ara[i], ara[i+1]); i++;}
         continue;
      }
      a = abs (ara[i-2] - ara[i-1]) + abs (ara[i-1] - ara[i]) + abs (ara[i] - ara[i+1]) + abs (ara[i+1] - ara[i+2]);
      b = abs (ara[i-2] - ara[i]) + abs (ara[i] - ara[i-1]) + abs (ara[i-1] - ara[i+1]) + abs (ara[i+1] - ara[i+2]);
      //left
      c = abs (ara[i-2] - ara[i-1]) + abs (ara[i-1] - ara[i+1]) + abs (ara[i+1] - ara[i]) + abs (ara[i] - ara[i+2]);
      //right
      int d = min (a, b, c);
      if (d == b) swap (ara[i], ara[i-1]);
      else if (d == c) {swap (ara[i], ara[i+1]); i++;}
   }
   sum = 0;

   for (int i = 1; i < n; i++) {
      sum += abs (ara[i] - ara[i-1]);

   }
   cout << sum << endl;
 }
}
