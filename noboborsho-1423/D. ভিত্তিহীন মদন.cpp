#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
   int cs = 0, t;
   ll n;
   string s;
   //freopen ("in.txt", "r", stdin);
   while (cin >> s) {
      int bina = 1;
      int hexa = 1;
      int octa = 1;
      int deci = 1;
      cnt = 0;
      for (int i = 0; s[i]; i++) {
         if (s[i] == '.') cnt++;
         if (s[i] >= '0' && s[i] <= '9') t = 1;
         if (s[i] >= 'a' && s[i] <= 'f') t = 1;
         if (s[i] >= 'A' && s[i] <= 'F') t = 1;
      }
      if (cnt > 1 || t == 0) {
         printf ("Case %d: habijabi number\n", ++cs);
         continue;
      }
      for (int i = 0; s[i]; i++) {
         if (s[i] == '.') continue;
         if (s[i] < '0' || s[i] > '9') deci = 0;
         if (s[i] < '0' || s[i] > '7') octa = 0;
         if (s[i] < '0' || s[i] > '1') bina = 0;
         if (s[i] >= 'A' && s[i] <= 'F') continue;
         if (s[i] >= 'a' && s[i] <= 'f') continue;
         if (s[i] < '0' || s[i] > '9') hexa = 0;
      }
      printf ("Case %d:", ++cs);
      t = 0;
      if (bina == 1) {
         if (first == 1) printf (", binary");
         else printf (" binary");
         t = 1; first = 1;
      }
      if (octa == 1) {
         if (first == 1) printf (", octal");
         else printf (" octal");
         t = 1; first = 1;
      }
      if (deci == 1) {
         if (first == 1) printf (", decimal");
         else printf (" decimal");
         t = 1; first = 1;
      }
      if (hexa == 1) {
         if (t == 0) printf (" hexadecimal");
         else printf (" & hexadecimal");
      }
      printf ("\n");
   }
   return 0;
}


