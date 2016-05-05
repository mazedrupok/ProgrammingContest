#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map <int, int> mp;
vector <int> v;
int main ()
{
    int n, m, x;
    cin >> n;
    int sci[n+1];
    for (int i = 1; i<= n; i++) {
        cin >> x;
        if (mp.find(x) == mp.end() ) {
            mp[x] = 1;
        }
        else mp[x]++;
    }
    cin >> m;
    int odi[m+1], sub[m+1];
    for (int i = 1; i<= m; i++) cin >> odi[i];
    for (int i = 1; i<= m; i++) cin >> sub[i];
    int mx = 0;
    for (int i = 1; i <= m; i++) {
        x = mp[odi[i]];
        if (mx < x) mx = x;
    }
    for (int i = 1; i <= m; i++) {
        if (mx == mp[odi[i]]) v.push_back (i);
    }
    if (v.size() == 1) {
        cout << v[0] << endl;
    }
    else {
        mx = 0;
        for (int i = 0; i < v.size(); i++) {
            if (mx < mp[ sub[v[i]] ]) {
                mx = mp[ sub[v[i]] ];
            }
        }
        for (int i = 0; i < v.size(); i++) {
            if (mx == mp[ sub[v[i]] ]) {
                cout << v[i] << endl;
                break;
            }
        }
    }
    return 0;
}

