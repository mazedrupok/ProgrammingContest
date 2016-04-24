#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
   int n, res;
   cin >> n;
   if (n %3 == 0) {
      res = n/3;
      res *= 2;
   }
   else {
      res = n/3;
      res++;
      res *= 2;
      res--;
   }
   cout << res << endl;
   return 0;
}
