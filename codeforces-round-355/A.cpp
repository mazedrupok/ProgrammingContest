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
   int n, h, sum = 0, x;
   cin >> n >> h;
   for (int i = 0; i < n; i++) {
      cin >> x;
      if (x > h) sum += 2;
      else sum += 1;
   }
   cout << sum << endl;
   return 0;
}

