/**
 Name:     Md. Abdul Mazed (RUPOK)
           Noakhali Science & Technology University
 Email:    mazedrupok@gmail.com || mazed4g@gmail.com
 FB id:    www.facebook.com/mazedrupok
 github:   www.github.com/mazedrupok
 problem:  http://codeforces.com/contest/682/problem/C
 Catagory: Graph (DFS)
*/
#include <bits/stdc++.h>
using namespace std;
#define MX 100005
#define read(f) freopen(f, "r", stdin)
#define write(f) freopen(f, "w", stdout)
typedef long long LL;
typedef unsigned long long ULL;
vector <int> g[MX];
vector <int> cost[MX];
int ver[MX];
bool visit[MX];
void DFS (int u, int path) {
    if (path < 0) path = 0;
    if (path > ver[u]) return;
    visit[u] = 1;
    for (int i = 0; i < g[u].size(); i++) {
        int v = g[u][i];
        if (visit[v] == 0) {
            DFS (v, path + cost[u][i]);
        }
    }
}
int main ()
{
    //read ("in.txt");
    int n, x, y; cin >> n;
    for (int i = 1; i <= n; i++) cin >> ver[i];
    for (int i = 2; i <= n; i++) {
        cin >> x >> y;
        g[x].push_back (i);
        g[i].push_back (x);
        cost[x].push_back (y);
        cost[i].push_back (y);
    }
    memset (visit, 0, sizeof (visit));
    DFS (1, 0);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (visit[i] == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}

