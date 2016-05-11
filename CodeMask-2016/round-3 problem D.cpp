#include <bits/stdc++.h>
long long ara[1000001] = {0};
using namespace std;
typedef long long ll;
int main ()
{
   ara[3] = 1;
   int cnt = 2;
   for (int i = 4; i <= 1000000; i++) {
      ara[i] = ara[i-1] + cnt;
      //ara[i] %= 1000000007;
      cnt++;
   }
//for (int i = 0; i < 10; i++) cout << ara[i] << " ";
   for (int i = 4; i <= 1000000; i++) {
      ara[i] += ara[i-1];
      //ara[i] %= 1000000007;
   }
   //cout << ara[1000000] << endl;
   //for (int i = 999990; i <= 1000000; i++) cout << ara[i] << " ";
   int tc, x, y;
   scanf ("%d", &tc);

   while (tc--) {
      scanf ("%d %d", &x, &y);
      long long res;


      if (x == y) res = ara[x] %1000000007;
      if (x > y) swap (x, y);
      else res = (ara[y] - ara[x-1]) %1000000007;
      printf ("%lld\n", res %1000000007);
   }
}
