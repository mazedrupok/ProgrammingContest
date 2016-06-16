/**
   Name:  Md. Abdul Mazed
   Noakhali Science & Technology University
   Email:  mazedrupok@gmail.com || mazed4g@gmail.com
   FB id:  www.facebook.com/mazedrupok
   github: www.github.com/mazedrupok

   problem link: https://toph.ws/c/nsu-code-masters-2016-r/arena#!/p/easy-sequence-2

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
map <ULL, ULL> mp;
ULL sq (ULL a) {
   return a*a;
}
ULL func (ULL n) {
   if (n == 1) return 1;
   if (n == 2) return 2;
   if (mp.find (n) != mp.end()) return mp[n];
   if (n %2 == 1) {
      return mp[n] = (func(n/2) * func((n/2) + 1) +2);
   }
   else return mp[n] = (sq(func(n/2)) + 1);
}
int main ()
{
   int tc, cs = 0;
   ULL n;
   cin >> tc;
   while (tc--) {
      cin >> n;
      printf ("Case %d: ", ++cs);
      cout << func (n) << endl;
      mp.clear();
   }

   return 0;
}
