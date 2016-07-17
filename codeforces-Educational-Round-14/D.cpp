#include <bits/stdc++.h>
using namespace std;
#define mx 1000001
bool visit[1000001] = {0};
int ara[mx];
vector <int> ind, val;
vector <int> edg[mx];
void dfs (int u) {
    if (visit[u] == 1) return;
    visit[u] = 1;
    ind.push_back (u);
    val.push_back (ara[u]);
    for (int i = 0; i < edg[u].size(); i++) {
        dfs (edg[u][i]);
    }
}
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, x, y;
    //freopen ("in.txt", "r", stdin);
    cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            cin >> ara[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            edg[x].push_back (y);
            edg[y].push_back (x);
        }
        for (int i = 1; i <= n; i++) {
            if (visit[i] == 0)  {
                ind.clear(); val.clear();
                dfs (i);
                sort(ind.begin(), ind.end());
                sort(val.begin(), val.end());
                reverse (val.begin(), val.end());
                for (int i = 0; i < ind.size(); i++) {
                    ara[ind[i]] = val[i];
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << ara[i] << " ";
        } cout << endl;
    return 0;
}
