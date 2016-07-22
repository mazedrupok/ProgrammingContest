#include <bits/stdc++.h>
using namespace std;
const int N = 200005;

int p[N];
int a[N];
int par[N];
int find(int u) {
    return par[u] == u ? u : find(par[u]);
}
bool merge(int u, int v) {
    u = find(u); v = find(v);
    par[u] = v;
    return u == v;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = a[i];
        par[i] = i;
    }
    int root = 0;
    for (int i = 1; i <= n; i++) {
        if (p[i] == i) {
            root = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (merge(i, p[i])) {
            if (root == 0) root = i;
            p[i] = root;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += a[i] != p[i];
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++) {
        cout << p[i] << ' ';
    } cout << endl;

    return 0;
}
