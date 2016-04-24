#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
   string s;
   int n;
   cin >> n;
   int ara[n+1];
   int visit[n+1];
   cin >> s;
   for (int i = 0; i < n; i++) cin >> ara[i];
   memset (visit, 0, sizeof (visit));
   int pos = 0, temp = 0;
   while (pos >= 0 && pos < n) {
      if (visit[pos] == 1) {
         cout << "INFINITE" << endl;
         temp = 1;
         break;
      }
      visit[pos] = 1;

      if (s[pos] == '>') pos += ara[pos];
      else if (s[pos] == '<') pos -= ara[pos];
   }
   if (temp == 0) cout << "FINITE" << endl;

   return 0;
}

