#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
#define LL long long
const int N = 200005;
LL row[100001] = {0};
LL col[100001] = {0};
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    LL n, m, x, y, r = 0, c = 0;
    LL res;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        if (row[x] == 0) {row[x] = 1; r++;}
        if (col[y] == 0) {col[y] = 1; c++;}

        res = n*n - n*r - n*c + r*c;
        if (res < 0) res = 0;
        cout << res << " ";
    }

    return 0;
}
