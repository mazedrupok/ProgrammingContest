#include <bits/stdc++.h>
using namespace std;
#define LL long long
map <pair<LL, LL>, LL> cost;
int main ()
{
    int n, t;
    LL u, v, w, res = 0, t1, t2;
    cin >> n;
    while (n--) {
        cin >> t;
        if (t == 1) {
            cin >> v >> u >> w;
            map <pair<LL, LL>, int> tem;
            t1 = v, t2 = u;
            while (t1 > 1) {
                tem[make_pair(t1, t1/2)] = 1;
                cost[make_pair(t1, t1/2)] += w;
                t1 /= 2;
            }
            while (t2 > 1) {
                if (tem.count (make_pair(t2, t2/2)) != 0) cost[make_pair(t2, t2/2)] -= w;
                else cost[make_pair(t2, t2/2)] += w;
                t2 /= 2;
            }
        }
        else if (t == 2) {
            res = 0;
            cin >> v >> u;
            map <pair<LL, LL>, int> tem;
            t1 = v, t2 = u;
            while (t1 > 1) {
                tem[make_pair(t1, t1/2)] = 1;
                res += cost[make_pair(t1, t1/2)];
                t1 /= 2;
            }
            while (t2 > 1) {
                if (tem.count (make_pair(t2, t2/2)) != 0) res -= cost[make_pair(t2, t2/2)];
                else res += cost[make_pair(t2, t2/2)];
                t2 /= 2;
            }
            cout << res << endl;
        }
    }
    return 0;
}
