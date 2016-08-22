#include <bits/stdc++.h>
using namespace std;
vector <int> vc[300001];
int vis[300001] = {0};
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); //read("in.txt");
    int n, q, type, x, cnt = 0, ith = 1, lo = 1;
    cin >> n >> q;
    while (q--) {
        cin >> type >> x;
        if (type == 1) {
            vc[x].push_back(ith++);
            cnt++;
        }
        else if (type == 2) {
            for (int i = 0; i < vc[x].size(); i++) {
                if (vis[vc[x][i]] == 0) {
                    cnt--; vis[vc[x][i]] = 1;
                }
            }
            vc[x].clear();
        }
        else if (type == 3) {
            for (int i = lo; i <= x; i++) {
                if (vis[i] == 0) {
                    cnt--; vis[i] = 1;
                }
                lo = x;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
