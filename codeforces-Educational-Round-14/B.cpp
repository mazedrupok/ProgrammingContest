#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s, a, b;
    map <char , char > m;
   int len, n, x;
   //freopen ("in.txt", "r", stdin);
   m['A']='A';
   m['b'] = 'd';
   m['d'] = 'b';
   m['H']='H';
   m['I']='I';
   m['M']='M';
   m['O']='O';
   m['o']='o';
   m['p']='q';
   m['q']='p';
   m['T']='T';
   m['U']='U';
   m['V']='V';
   m['v']='v';
   m['W']='W';
   m['w']='w';
   m['X']='X';
   m['x']='x';
   m['Y']='Y';
    while (cin >> s) {
        len = s.size();
      a = b = "";  //removing previous memory..
      for (int i = len - 1, j = 0; i >= 0; i--, j++) {
         //a += s[i];   //catenating advantage..
         b += m[s[i]];
      }

      if ( s==b) {
            cout << "TAK" << endl;
      }
      else {
            cout << "NIE" << endl;
      }
    }
}
