#include <bits/stdc++.h>
using namespace std;
int main ()
{
   string s, t;
   cin >> s >> t;
   //cout << s.size() << " " << t.size() << endl;
   int suma = 0; int sumb = 0;

   int num1[6] = {0}, num2[6] = {0};

   for (int i = 0, m = 1; s[i]; i++) {
      if (s[i] == '.') m++;
      else {
         num1[m] = num1[m] * 10 + (s[i] -48);
      }
   }
   for (int i = 0, m = 1; t[i]; i++) {
      if (t[i] == '.') m++;
      else {
         num2[m] = num2[m] * 10 + (t[i] -48);
      }
   }

   for (int i = 1; i < 5; i++) {
      if (num1[i] > num2[i]) {cout << s << endl; return 0;}
      else if (num1[i] < num2[i] ) {cout << t << endl; return 0;}
   }

   if (s.size() >= t.size()) {
      cout << s << endl;
   }
   else {
      cout << t << endl;
   }
   return 0;
}
