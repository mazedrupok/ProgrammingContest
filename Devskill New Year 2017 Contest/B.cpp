#include <bits/stdc++.h>
using namespace std;
#define ll long long
map <string, int> mp;
map <string, int> vis;
map <int, string> Back;
int main ()
{
    int n, res, tc, cs = 0, cnt = 1;
    scanf (" %d", &tc);
    string s, p, q;
    while (tc--) {
        cin >> s;
        if (s == "create") {
            cin >> p;
            if (mp.find (p) == mp.end()) { //not found
                mp[p] = 1;
                vis[p] = cnt;
                Back[cnt] = p;
                cnt++;
                cout << "OK\n";
            }
            else {  //found
                cout << "ERROR\n";
            }
        }
        else if (s == "change") {
            cin >> p >> q;
            if (mp[p] == 1 && mp.find(q) == mp.end()) {
                cout << "OK\n";
                mp[p] = -1;
                mp[q] = 1;
                vis[q] = vis[p];
                Back[vis[q]] = q;
            }
            else {
                cout << "ERROR\n";
            }
        }
        else if (s == "search") {
            cin >> p;
            if (mp.find(p) != mp.end()) { //found
                cout << Back[vis[p]] << "\n";
            }
            else {          //not found
                cout << "ERROR\n";
            }
        }
    }
    return 0;
}
