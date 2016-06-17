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
map <int, int> mp;
int main ()
{
   //read ("in.txt");
   int n;
   cin >> n;
   int ara[n];
   for (int i = 0; i < n; i++) {
      cin >> ara[i];
   }
   sort (ara, ara+n);
   int cnt = 1;

   for (int i = 0; i < n; i++) {
      if (cnt < ara[i] ) {
         ara[i] = cnt;
      }
      cnt = ara[i]+1;
   }
   //for (int i = 0; i < n; i++) cout << ara[i] << " "; cout << endl;
   cout << cnt << endl;
   return 0;
}


