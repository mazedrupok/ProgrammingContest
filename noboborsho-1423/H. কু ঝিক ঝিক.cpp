#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
   int tc, n;
   cin >> tc;
   while (tc--) {
      cin >> n;
      n = n * (n-1) * .5;
      cout << n << endl;
   }
   return 0;
}
