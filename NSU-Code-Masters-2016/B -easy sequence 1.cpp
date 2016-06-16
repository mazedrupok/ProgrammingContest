/**
   Name:  Md. Abdul Mazed
   Noakhali Science & Technology University
   Email:  mazedrupok@gmail.com || mazed4g@gmail.com
   FB id:  www.facebook.com/mazedrupok
   github: www.github.com/mazedrupok

   problem link: https://toph.ws/c/nsu-code-masters-2016-r/arena#!/p/easy-sequence-1

*/
#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
typedef long long LL;
LL ara[150] = {0};
map <int, int> mp;
int main ()
{
   ara[1] = 1;
   for (int i = 2; i < 100; i++) {
      if (i %2 == 0) {
         ara[i] = ara[i/2] * ara[i/2] + 1;
      }
      else {
         ara[i] = ara[i/2] * ara[i/2 + 1] + 2;
      }
   }
   for (int i = 1; i < 90; i++) {
      mp[ara[i]] = i;
   }
   int n, tc, cs = 0;
   cin >> tc;
   while (tc--) {
      cin >> n;
      printf ("Case %d: ", ++cs);
      cout << mp[n] << endl;
   }
   return 0;
}
