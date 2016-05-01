#include <bits/stdc++.h>
using namespace std;
int main ()
{
   long long n, a, b;
   cin >> n;
   a = 1, b = 1;
   for (long long i = 1; i <= n; i++) {
      cout << i << " " << b << endl;
      b += i;
   }
   return 0;
}

