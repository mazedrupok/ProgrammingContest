#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int n;
   cin >> n;
   long long ara[n];
   long long mx = 0, sum;
   for (int i = 0; i < n; i++) {
      cin >> ara[i];
      if (ara[i] > mx) mx = ara[i];
   }
   sum = 0;
   for (int i = 0; i < n; i++) {
      if (ara[i] != mx) sum += ara[i];
   }
   sum = mx - sum + 1;
   cout << sum << endl;
}

