/**
   Name:  Md. Abdul Mazed
   Noakhali Science & Technology University
   Email:  mazedrupok@gmail.com || mazed4g@gmail.com
   FB id:  www.facebook.com/mazedrupok
   github: www.github.com/mazedrupok

   Catagory:
   Comment:

*/
#include <bits/stdc++.h>
using namespace std;
#define MX 10005
#define read(f) freopen(f, "r", stdin)
#define write(f) freopen(f, "w", stdout)
typedef long long LL;
typedef unsigned long long ULL;
int main ()
{
   //read ("in.txt");
   LL n, m, res = 0;
   cin >> n >> m;
   for (LL i = 1; i <= n; i++) {
      res += ((i+m)/5);
      res -= i/5;
   }
   cout << res << endl;

   return 0;
}


