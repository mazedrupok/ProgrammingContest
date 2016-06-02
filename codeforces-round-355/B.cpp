/*
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
int main ()
{
   //read ("in.txt");
   LL n, h, k;
   cin >> n >> h >> k;
   LL t = 0;
   LL ara[n];
   for (int i = 0; i < n; i++) {
      cin >> ara[i];
   }
   LL x = 0;
   for(int i = 0; i < n; i++) {
      //cout << x << "  " << t << endl;
      x += ara[i];
      if (x > h) {
         t++;
         x = ara[i];
      }
      if (x > k) {
         t += x/k;
         x = x%k;
      }
   }
   if (x ) t++;
   cout << t << endl;
   return 0;
}


