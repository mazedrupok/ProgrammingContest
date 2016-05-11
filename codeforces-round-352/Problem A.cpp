#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int ara[10100]; int as = 1;
void func (int n) {
   if (n == 0) return;
   func (n /10);
   ara[as++] = n %10;
}
int main ()
{
   for (int i = 0; i < 400; i++) {
      func (i);
   }
//   for (int i = 0; i < 1001; i++) {
//      cout << ara[i];
//   }
   int n;
   cin >> n;
   cout << ara[n];
}

