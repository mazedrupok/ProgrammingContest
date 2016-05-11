#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
map <char, int> mp;
int main ()
{
   int n;
   string s;
   cin >> n >> s;
   int res = 0, temp = 0;
   for (int i = 0; i < s.size(); i++) {
      if (mp.find(s[i]) == mp.end()) {
         mp[s[i]] = 1;
      }
      else res++;
   }
   for (char i = 'a'; i <= 'z'; i++) {
      if (mp.find(i) == mp.end()) temp++;
   }
  // cout << res << " " << temp << endl;
   if (temp < res) cout << "-1" << endl;
   else cout << res << endl;
   return 0;
}

